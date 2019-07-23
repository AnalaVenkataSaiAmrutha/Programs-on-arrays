/*Sum of elements in the matrix */
#include<stdio.h>
int main()
{
	int a[20][20],i,j,r,c,sum=0;
	printf("Enter the rows and cols:\n");
	scanf("%d%d",&r,&c);
	printf("Enter matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		  scanf("%d",&a[i][j]);
	}
	printf("Array elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		  printf("%d",a[i][j]);
	
	  printf("\n");
}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		  sum=sum+a[i][j];
	}
	printf("Sum:%d",sum);
	return 0;
}
