#include<linux/kernel.h>
#include<sys/syscall.h>
#include<unistd.h>
#include<stdio.h>
int main()
{
	long int r = syscall(333);
	printf("system call sys_hello returned : %ld\n",r);
	return 0;
}
