#include <stdio.h>
void main ()
{
	char x;
	printf("Enter the number");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&X<='Z'))
	{
		printf("%c is char",x);
	}
		
	else  
	{
		printf("%c is un char",x);
	}
	
}