#include <stdio.h>
void main ()
{
	float x,y,z;
	printf("Enter 3 numbers");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y&&x>z)
	{
		printf("the largest is %f",x);
	}
	else if (y>x&&y>z)
	{
		printf("the largest is %f",y);
		
	}
	else 
	{
		printf("the largest is %f",z);
	}
}