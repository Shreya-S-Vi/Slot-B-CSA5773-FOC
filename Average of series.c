#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	avg=sum/(float)n;
	printf("Average: %f",avg);
}
