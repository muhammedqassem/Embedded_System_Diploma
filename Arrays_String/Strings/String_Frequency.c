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
#include <string.h>


int main(void)
{
	char a[50];
	int i,count=0;
	fflush(stdout); fflush(stdin);

	printf("enter the sentence  :");
	fflush(stdout); fflush(stdin);

	gets(a);
	fflush(stdout); fflush(stdin);

	printf("enter the charcter to search: ");
	fflush(stdout); fflush(stdin);


	for(i=0;a[i]!='\0';i++)
	{

        ++count;
	}
	fflush(stdout); fflush(stdin);

printf("%d",count);
return 0;
}
