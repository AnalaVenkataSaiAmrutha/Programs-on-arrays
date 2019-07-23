/*GCD of two numbers using functions */
#include<stdio.h>
int gcdf(int,int);
int main()
{
	int a,b,gcd;
	printf("Enter a and b values:\n");
	scanf("%d%d",&a,&b);
	gcd=gcdf(a,b);
	printf("GCD:%d",gcd);
	return 0;
}
int gcdf(int a,int b)
{
	int c;
	c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	return b;
}
