#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2==0)
		{
			sum+=i;
		}
	}
	printf("Sum of series of even numbers: %d",sum);
}
