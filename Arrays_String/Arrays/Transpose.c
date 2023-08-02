/*
 ============================================================================
 Name        : workspacee.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[5];
	int b[5];
	int n,i,A,L;
	fflush(stdout); fflush(stdin);

	printf("enter the values  :");
	fflush(stdout); fflush(stdin);

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		fflush(stdout); fflush(stdin);

		printf("enter the element num %d ",i+1);
		fflush(stdout); fflush(stdin);

		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		fflush(stdout); fflush(stdin);

		printf("%d  ",a[i]);

	}
	////////////////
	fflush(stdout); fflush(stdin);

printf("enter the element to be inserted and its location");
fflush(stdout); fflush(stdin);

scanf("%d",&A);
fflush(stdout); fflush(stdin);

scanf("%d",&L);
for(i=n;i>=	L;i--)
{

	a[i]=a[i-1];
}
n++;
a[L-1]=A;
for(i=0;i<n;i++)
	{
		fflush(stdout); fflush(stdin);

		printf("%d  ",a[i]);

	}
}
