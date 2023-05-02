#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter the first number 'a':");
	scanf("%d",&a);
	printf("Enter the second number 'b':");
	scanf("%d",&b);
	printf("Before Swapping:");
	printf("A: %d  B:%d\n\n",a,b);
	
	t=a;
	a=b;
	b=t;
	
	printf("After Swapping:");
	printf("A: %d  B:%d",a,b);
}
