#include <stdio.h>
#include <string.h>

// apt-get install gcc-multilib
// gcc -g main.c -o main -fno-stack-protector -z execstack -no-pie -m32

unsigned char bytes[] =
"\xeb\x3e\x58\x89\xc1\xbb\x00\x00\x00\x00\xba\x53\x00\x00\x00\x31\xc0\x8a\x04\x19\x53\x51\x50\x89\xe1\xb8\x04\x00\x00\x00\xbb\x01\x00\x00\x00\x52\xba\x01\x00\x00\x00\xcd\x80\x5a\x59\x59\x5b\x43\x43\x4a\x75\xdb\xb8\x01\x00\x00\x00\xbb\x00\x00\x00\x00\xcd\x80\xe8\xbd\xff\xff\xff\0";
// \x73\x68\x65\x6c\x6c\x63\x6f\x64\x65\x5f\x69\x73\x5f\x64\x61\x74\x61\x5f\x64\x61\x74\x61\x5f\x69\x73\x5f\x73\x68\x65\x6c\x6c\x63\x6f\x64\x65 <-- ascii

void main(void) {
	// int retval = 0;
	// int (*code)() = (int(*)())bytes; // wtf
	// retval = code();
	// printf("%d\n", retval);

	(*(void(*)(void))&bytes)();
	return;
};