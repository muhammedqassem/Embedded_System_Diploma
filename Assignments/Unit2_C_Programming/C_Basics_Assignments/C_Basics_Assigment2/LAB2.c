#include <stdio.h>
void main ()
{
	char x;
	printf("Enter the alphabet you want to check");
	fflush(stdout); fflush(stdin);
	scanf("%c",&x);
	switch (x)
	
	{
			case'a':
			case'u':
			case'h':
			case'i':
			case'o':
			{
				printf("%c is vowel",x);
				
			}
			break;
			default:
			{
				printf("%c is constant",x);
			}
			
			
			}
	
}