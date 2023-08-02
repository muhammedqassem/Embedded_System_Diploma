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
	float a[100];
	int i,n;
	float sum=0.0;
	float avg;
	fflush(stdout); fflush(stdin);
printf("enter the number of elements : ");
fflush(stdout); fflush(stdin);
scanf("%d",&n);

	while(n<0||n>100)
	{
		fflush(stdout); fflush(stdin);
		printf("error num plz correct");
		fflush(stdout); fflush(stdin);
		printf("enter the number");
		fflush(stdout); fflush(stdin);
		scanf("%d",&n);
	}
	for (i=0;i<n;i++)
	{

		fflush(stdout); fflush(stdin);
		printf("enter the element number %d ",i+1);
		fflush(stdout); fflush(stdin);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	avg=sum/i;
	fflush(stdout); fflush(stdin);
	printf("averge equal %.2f",avg);
	return 0;


}
