#include<linux/kernel.h>
asmlinkage long sys_additionoftwo(int num1, int num2)
{
	return num1+num2;
}

