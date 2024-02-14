//Pointers
#include<stdio.h>
void main()
{
	int age=20;
	int *ptr;//Pointer variable of int type
	ptr=&age;
	printf("\n%d\n",age);//20
	printf("\n%d\n",&age);//-1001684860
	printf("\n%p\n",ptr);//0x7ffcc44b8084
	printf("\n%d\n",*ptr);//20
	printf("\n%p\n",*ptr);//0x14
}
