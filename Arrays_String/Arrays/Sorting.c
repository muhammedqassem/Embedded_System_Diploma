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
	int a[30];
	int n,i,s;
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
	fflush(stdout); fflush(stdin);

	printf("enter the element you want to check");
	fflush(stdout); fflush(stdin);

	scanf("%d",&s);
	i=0;
	while(i<n&&a[i]!=s)
	{
		i++;
	}

	if(s==a[i])
	{
		printf("true at %d",i+1);
	}


	else
	{
		printf("false");
	}



}
