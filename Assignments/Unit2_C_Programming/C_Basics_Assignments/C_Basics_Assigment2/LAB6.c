#include <stdio.h>
void main ()
{
	int x;
	int sum=0;
	int i;
	printf("Enter the number");
	fflush(stdout); fflush(stdin);
	scanf("%d",&x);
	for(i=0;i>=x;i++)
	{
		sum+=x;
	}
	printf("%d",sum);
	
}