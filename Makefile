obj-m += bmorse.o
bmorse-y := encoding.o morse.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	$(CC) regress.c -o regress        
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	rm regress
