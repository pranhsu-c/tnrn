#include<stdio.h>

divisible(int n1)
{
if(n1%3==0 && n1%5==0)
{
  printf("%d is divisible by 3 and 5",n1);	
}
else
{
  printf("%d is not divisible by 3 and 5",n1);	  	
}
	
}


main()
{
	
	int n;
	
	printf("enter your number=");
	scanf("%d",&n);
	
    divisible(n);
	
}
