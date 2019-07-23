/*Diagonal Sums*/
#include<stdio.h>
int main()
{
	int a[20][20],i,j,n,k,sum1=0,sum2=0;
	printf("Enter the rows and cols:\n");
	scanf("%d %d",&n,&k);
	printf("Enter matrix elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		  scanf("%d",&a[i][j]);
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
		  printf("%d",a[i][j]);
	
	  printf("\n");
}
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<k;j++)
		{
		
		   if(i==j)
		    sum1=sum1+a[i][j];
		   if((i+j)==(n-1))
		     sum2=sum2+a[i][j];
        
        }
}
	     printf("Principle diagonal Sum:%d\n",sum1);
	     printf("Secondary  diagonal sum:%d\n",sum2);
    
    
	return 0;
}
