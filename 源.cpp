#include<stdio.h>
#include<string.h>

int main()
{
	char str[] ="Ilovehqyhqyhqyhqy";
	printf("sizeof str = %d\n", sizeof(str));//�ַ�����ռ�ռ�(����\0)
	printf("sizeof str = %u\n", strlen(str));//�ַ����ĳ��ȣ�������\0)
	return 0;
}