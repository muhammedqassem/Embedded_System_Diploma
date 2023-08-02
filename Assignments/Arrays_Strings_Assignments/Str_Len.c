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
	int i,j,temp;
	fflush(stdout); fflush(stdin);

	printf("enter the sentence  :");
	fflush(stdout); fflush(stdin);

	gets(a);
	i=0;
	j=strlen(a)-1;
	fflush(stdout); fflush(stdin);
	while(j>i)
	{
		temp=a[i]; ///put 'A' in temp
		a[i]=a[j]; //put a[4]-->a[0],,D IN FIRST
		a[j]=temp;// PUT TEMP('A') IN LAST
		i++;
		j--;
	}

	fflush(stdout); fflush(stdin);
	printf("%s",a);

	return 0;
}
