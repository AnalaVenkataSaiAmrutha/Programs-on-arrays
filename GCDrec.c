/*Find GCD using recursion */
#include<stdio.h>
int GCD(int,int);
int main()
{
	int a,b,res;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	res=GCD(a,b);
	printf("%d",res);
	return 0;
}
int GCD(int a,int b)
{
	if(a%b==0)
	return b;
	else
	return (GCD(b,a%b));
}
