#include<stdio.h>
int main ()
{
	int num,rem,arm=0,i,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	for (i=0;i<3;i++)
	{
		rem=num%10;
		arm+=rem*rem*rem;
		num/=10;
	}
	if (temp==arm)
	{
		printf("The given number is an Armstrong number\n");
	}
	else 
	{
		printf("The given number is not an Armstrong number\n");
	}
}
