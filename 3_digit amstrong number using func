/* Three digit amstrong number  using functions*/
#include<stdio.h>
int amstrong(int);
int main()
{
	int n,sum;
	printf("Enter the number:\n");
	scanf("%d",&n);
	sum=amstrong(n);
	if(sum==n)
	 printf("%d is a amstrong number\n",n);
	else
	 printf("%d is not a amstrong number\n",n);
	return 0;
}
int amstrong(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		sum=sum+r*r*r;
	}
	return sum;
	
}
