#include<stdio.h>
void main()
{
	const volatile int a = 10;
	 int *b = (int*)&a;
	printf("%d \n",a);
	*b=20;
	printf("%d \n",a);
}