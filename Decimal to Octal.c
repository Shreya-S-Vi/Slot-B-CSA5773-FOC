#include<stdio.h>
int main()
{
	int a,b[100],i,j;
	printf("Enter a decimal number:");
	scanf("%d",&a);
	for(i=0;a>0;i++)
	{
		b[i]=a%8;
		a=a/8;
	}
	printf("Octal value of Given Number : ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",b[j]);
	}
}
