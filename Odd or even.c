#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The given number is even");
	}
	else if(n%2!=0)
	{
		printf("The given number is odd");
	}
	else
	{
		printf("The given number is neither even nor odd");
	}
}
