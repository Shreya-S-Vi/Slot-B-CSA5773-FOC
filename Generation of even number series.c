#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Generation of number series upto %d terms:\n",n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
