#include<stdio.h>
#include<conio.h>

void main()
{
	auto int i = 1;
	{
		auto int i = 2;
		{
			auto int i = 3;
			printf("%d \n",i);
			printf("\nReturn value from function %d",add(5,6));
		}
		printf("\n%d",i);
	}
	printf("\n%d",i);	
}

auto int add(int a, int b)
{
		return a+b;
}
