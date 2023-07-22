#include <stdio.h>
void main ()
{
	int x,div;
	printf("Enter the integer number you want to check");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	div=x%2;
	if(div==0)
	{
		prinft("%d is even ",x);
	}
	else if(div>0)
	{
		printf("%d is odd",x);
	}
	else 
	{
		printf("x=0");
	}
	
}