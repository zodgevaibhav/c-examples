#include<stdio.h>
#include<conio.h>

void main()
{
	register int i = 1;
	printf("\n%d",i);	
	//printf("\n%d",&i);	//error C2103: '&' on register variable
}