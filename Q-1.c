//Q.1 Write a Program to find the minimum number from the given 3 numbers using nested if else. Also, draw a Flowchart in your book.

#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter First Value ");
	scanf("%d",&a);
	printf("Enter Second Value ");
	scanf("%d",&b);
	printf("Enter Third Value ");
	scanf("%d",&c);
	
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is Minimum Value",a);
		}
		else
		{
			printf("%d is Minimum Value",c);
		}
	}
	else
	{
		if(b<c)
		{
			printf("%d is Minimum Value",b);
		}
		else
		{
			printf("%d is Minimum Value",c);
		}
	}
}