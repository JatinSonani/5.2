//Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else. Also, draw a Flowchart in your book.

#include <stdio.h>

main()
{
	int a,b,c,d;
	printf("Enter First Value ");
	scanf("%d",&a);
	printf("Enter Second Value ");
	scanf("%d",&b);
	printf("Enter Third Value ");
	scanf("%d",&c);
	printf("Enter Forth Value ");
	scanf("%d",&d);
	
	if(a>b) 
	{
        if(a>c)
		{
            if(a>d)
			{
                printf("%d is Maximum Value ",a);
            }
			else{
                printf("%d is Maximum Value ",d);
            }
        }
		else{
            printf("%d is Maximum Value ",c);
        }
	}
	else
	{
        if(b>c)
		{
            if(b>d)
			{
                printf("%d is Maximum Value ",b);
            }
			else
			{
                printf("%d is Maximum Value ",d);
            }
        }
		else
		{
            printf("%d is Maximum Value ",c);
        }
    }
    
}
