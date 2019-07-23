/* Sum of the following series using functions
1!/1+2!/2+3!/3+.......*/
#include<stdio.h>
int ser(int);
int main()
{
   int n,sum;
   printf("Enter the n value:\n");
   scanf("%d",&n);
   sum=ser(n);
   printf("Sum of series:%d\n",sum);	
   return 0;
}
int ser(int n)
{
	int i=1,k=1,sum=0,a;
	while(n>=i)
	{
		k=k*i;
		a=k/i;
		i++;
		sum=sum+a;
	}
	return sum;
}
