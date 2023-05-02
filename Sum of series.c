#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum of series of numbers: %d",sum);
}
