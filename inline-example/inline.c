#include<stdio.h>

void  main()
{
	int add(int, int);
	printf("%d",add(5,4));
}

inline int add (int a, int b)
{
	return a+b;
}