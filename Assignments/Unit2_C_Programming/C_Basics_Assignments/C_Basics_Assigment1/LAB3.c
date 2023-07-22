#include <stdio.h>
void main ()
{
	int x,y,sum;
	printf("enter two integer numbers : ")
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&x,&y)
	sum=x+y;
	printf("sum=%d",sum) ;
}