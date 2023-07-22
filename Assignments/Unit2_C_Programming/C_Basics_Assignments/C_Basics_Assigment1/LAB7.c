#include <stdio.h>
void main ()
{
	float x,y,temp;
	printf("enter the 2 numbers : ")
	fflush(stdout); fflush(stdin);
	scanf("%d %d",&x,&y);
	temp=y;
	printf("after temp first number = %d ",temp);
	temp=x;
	printf("after temp second number=%d",temp);
	
}