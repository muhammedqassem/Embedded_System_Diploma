#include <stdio.h>
void main ()
{
	float x,y,sum,sub,div,mul;
	char o;
	sum=x+y;
	sub=x-y;
	mul=x*y;
	div=x/y;
	printf("Enter the number");
	fflush(stdout); fflush(stdin);
	scanf("%f %f",&x,&y);
		printf("Enter the operation");
	fflush(stdout); fflush(stdin);
	scanf("%c",&o);
	switch(o)
	{
	case '+':
	{
	          printf("sum=%f",sum);
	break;
	}
		case '-':
	{
	          printf("sum=%f",sum);
	break;
	}
		case '*':
	{
	          printf("sum=%f",sum);
	break;
	}
		case '/':
	{
	          printf("sum=%f",sum);
	break;
	}
	default
	{
		printf("wrong button");
	}
	}
	}