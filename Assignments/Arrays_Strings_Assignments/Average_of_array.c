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
	float a[10][10];
	float b[10][10];

	int i,j,r,c;
	fflush(stdout); fflush(stdin);
	printf("enter the numbers of rows");
	fflush(stdout); fflush(stdin);
	scanf("%d",&r);
	fflush(stdout); fflush(stdin);
	printf("enter the numbers of rows coloums");
	fflush(stdout); fflush(stdin);
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			fflush(stdout); fflush(stdin);

			printf("enter a%d%d",i,j);
			fflush(stdout); fflush(stdin);

			scanf("%f",&a[i][j]);
		}

	}

	for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{

				printf("%.1f \t",a[i][j]);
				if(j==c-1)
				{
					printf("\n \n");
				}
			}
		}
	printf("trans = \n");
	//////// for printing transpose
	for(i=0;i<r;i++)
			{
				for(j=0;j<c;j++)
				{
					b[j][i]=a[i][j];
				}

				}
	for(i=0;i<c;i++)
			{
				for(j=0;j<r;j++)
				{

					printf("%.1f \t",b[i][j]);
					if(j==r-1)
					{
								printf("\n\n");
					}
				}

				}
}
