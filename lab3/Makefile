KERN_DIR = /usr/src/linux-headers-5.4.0-67-generic/

all:
	make -C $(KERN_DIR) M=`pwd` modules

clean:
	make -C $(KERN_DIR) M=`pwd` modules clean
	rm -rf modules.order

obj-m   += mydev.o
