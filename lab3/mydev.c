#include<linux/module.h>
#include<linux/init.h>
#include<linux/fs.h>
#include<linux/cdev.h>
#include<asm/uaccess.h>

static dev_t dev_id;       //设备号
static struct cdev *mydev; //字符设备
static struct class *mydev_class;

char msg[50]="initial message!";

int mydev_open(struct inode *inode, struct file *file)
{
    printk("mydev open\n");
    return 0;
}

ssize_t mydev_read(struct file *file, char __user *data, size_t size, loff_t *loff)
{
    if(raw_copy_to_user(data,msg,sizeof(msg)))
	{
	  return -1;
	}
    printk("mydev read\n");
	return sizeof(msg);
}

ssize_t mydev_write(struct file *file, const char __user *data, size_t size, loff_t *loff)
{
    if(raw_copy_to_user(msg,data,sizeof(msg)))
	{
	  return -1;
	}
     printk("mydev write\n");
	return sizeof(msg);
   
    
}

/* 文件操作集合 */
static struct file_operations mydev_fops = {
    .owner = THIS_MODULE,
    .open = mydev_open,
    .read = mydev_read,
    .write = mydev_write,
}
;

//初始化设备
static __init int mydev_init(void)
{
    //申请设备号
    alloc_chrdev_region(&dev_id, 1, 1, "mydev");

    //分配字符设备
    mydev = cdev_alloc();

    //设置字符设备
    cdev_init(mydev, &mydev_fops);

    //注册字符设备
    cdev_add(mydev, dev_id, 1);

    //动态创建设备描述文件 /dev/MyDev
	

    mydev_class = class_create(THIS_MODULE, "MyDev");
	device_create(mydev_class, NULL, dev_id, NULL, "MyDev");

    //打印设备号
    printk("dev id - > major : %d  monor : %d\n", MAJOR(dev_id), MINOR(dev_id));

    return 0;
}

//注销设备
static __exit void mydev_exit(void)
{
    device_destroy(mydev_class, dev_id);
    class_destroy(mydev_class);

    cdev_del(mydev);
    vfree(mydev);
    unregister_chrdev_region(dev_id, 1);
}

module_init(mydev_init);
module_exit(mydev_exit);

MODULE_LICENSE("GPL");