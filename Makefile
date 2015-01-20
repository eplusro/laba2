obj-m	:= e1000_main.o

KERNELDIR ?= ~/3.5.0-37-generic/build/
pwd	  := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD)

clean:
	em -rf *.o *~ .depend .*.cmd *.ko *.mod.c .tmp_versions
