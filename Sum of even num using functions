/*Sum of even numbers using functions */
#include<stdio.h>
int sumeven(int a[]);
int main()
{
	int a[10],i,sum;
	printf("Enter the numbers:");
	for(i=0;i<10;i++)
	  scanf("%d",&a[i]);
	sum=sumeven(a);
	printf("Sum of even numbers:%d\n",sum);
	return 0;
	
}
int sumeven(int a[])
{
	int i,sum=0;
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		  sum=sum+a[i];
	}
	return sum;
}
