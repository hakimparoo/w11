#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "string.h"

struct xxx
{
	int  p;
	char name[30];
}Emp[100];

int main()
{
	int i, max = 0, j, n, sum = 0, min = 0,temp=0;



	printf("Enter  Amount of Student => ");
	scanf("%d", &n);
	printf("\n***  <Name>  <Point>  ***\n\n");
	for (i = 0;i < n;i++)
	{
		printf("Enter data (%d) : ", i + 1);
		scanf("%s %d", Emp[i].name, &Emp[i].p);
	}
	printf("\n\n");
	printf(" *** Analyzing Data ***\n");
	printf("\n");
	printf("Average Student = ");
	for (i = 0;i < n;i++)
	{
		for (j = i+1;j < n;j++)
		{
			if (Emp[i].p > Emp[j].p)
			{
				temp = Emp[i].p;
				Emp[i].p = Emp[j].p;
				Emp[j].p = temp;
			}
		}
	}
	for (j = 0;j < n;j++)
	{
		sum = sum + Emp[j].p;
	}
	min = Emp[0].p;
	max = Emp[n - 1].p;
	printf("%.3f\n", (float)sum / n);
	printf("Min --> Max      = %d --> %d\n\n", min, max);


	return 0;
}