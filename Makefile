all: os-image
	qemu-system-i386 -kernel kernel.bin
	make clean

os-image:  kernel.bin
	
kernel.bin: kernel/kernel.c kernel/kernel_entry.asm
	nasm -f elf32 kernel/kernel_entry.asm  -o entry.o

	gcc  -fno-stack-protector -Ilibc/   -m32 -c \
	kernel/kernel.c \
	libc/stdio.c \
	libc/time.c \
	libc/itoa.c \
	libc/atoi.c \
	libc/math.c \
	libc/ftoa.c

	ld    -o kernel.bin -m elf_i386 -T link.ld \
	entry.o \
	kernel.o \
	stdio.o \
	time.o \
	itoa.o \
	atoi.o \
	math.o \
	ftoa.o

clean:
	rm *.bin *.o os-image
