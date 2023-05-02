#include <stdio.h>
int main ()
{
  int n,sum;
  printf("Enter the number of terms:");
  scanf("%d",&n);
  sum = n*(n+1)/2;
  sum *= sum;
  printf("Sum is: %i\n", sum);
  return 0;
}


/* Other method:

for(i=0;i<=n;i++)
{
	sum+=i*i*i;
} */
