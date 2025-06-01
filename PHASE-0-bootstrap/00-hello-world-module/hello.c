#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

// Entry function : Runs when the module is loaded
static int __init hello_init(void) {
  printk(KERN_INFO, "hello_world: Module loaded into kernel.\n");
  return 0;
}

// Exit function : Runs when the module is unloaded
static void __exit hello_exit(void) {
  printk(KERN_INFO, "hello_world: MOdule removed from the kernel.\n");
}

// Register the init function with kernel.
module_init(hello_init);

// Register the exit function with kernel.
module_exit(hello_exit);

// METADATA
MODULE_LICENSE("GPL");
MODULE_AUTHOR("LonelyAlchemist");
MODULE_DESCRIPTION("A simple hello world kernel module.");
MODULE_VERSION("0.1");
