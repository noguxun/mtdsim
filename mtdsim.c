/*
 * For kernel 3.13
 */

#include <linux/init.h>
#include <linux/types.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/vmalloc.h>
#include <linux/math64.h>
#include <linux/slab.h>
#include <linux/errno.h>
#include <linux/string.h>
#include <linux/mtd/mtd.h>
#include <linux/mtd/nand.h>
#include <linux/mtd/nand_bch.h>
#include <linux/mtd/partitions.h>
#include <linux/delay.h>
#include <linux/list.h>
#include <linux/random.h>
#include <linux/sched.h>
#include <linux/fs.h>
#include <linux/pagemap.h>
#include <linux/seq_file.h>
#include <linux/debugfs.h>



#define PK(fmt, args...)  printk(KERN_INFO "nfc: " fmt, ##args )
#define PKL(fmt, args...) printk(KERN_INFO "nfc: " fmt "\n", ##args )


static int __init nfc_init_module(void)
{
	PKL("module inint");
	return retval;
}
module_init(nfc_init_module);


static void __exit nfc_cleanup_module(void)
{
	PKL("module exit");
}
module_exit(nfc_cleanup_module);

MODULE_LICENSE ("GPL");
MODULE_AUTHOR ("Xun Gu");
MODULE_DESCRIPTION ("The NAND flash controller simulator");
