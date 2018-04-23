#include <stdio.h>

int main(int argc, char *argv[])
{
	int array[10];
	//数组名是常量,无法修改
	printf_s("array = %p \t &array[0] = %p \t", array, &array[0]);
	//打印数组名地址,与打印数组第一个元素的地址
	return 0;
}