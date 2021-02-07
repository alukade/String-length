#include<stdio.h>
#include<string.h>

int main()
{
	char str[] ="Ilovehqyhqyhqyhqy";
	printf("sizeof str = %d\n", sizeof(str));//字符串所占空间(包含\0)
	printf("sizeof str = %u\n", strlen(str));//字符串的长度（不包含\0)
	return 0;
}