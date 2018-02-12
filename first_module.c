#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/uaccsess.h>
#include <linux/cdev.h>
struct virtual_device{
   char array[100];
};

static int __init load(void)
{
   printk("Aktywacja sterownika\n");
}

static void __exit unload(void)
{
   printk("Deaktywacja sterownika\n");
}

module_init(load);
module_exit(unload);

