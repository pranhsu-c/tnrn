#include<stdio.h>

cube(int n1)
{
	int c;
	
	c=n1*n1*n1;
	printf("cube of %d =%d",n1,c);
}


main()
{
	
	int n;
	
	printf("enter your number to find cube=");
	scanf("%d",&n);
	
	cube(n);
	
}
