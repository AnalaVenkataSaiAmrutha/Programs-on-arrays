/* Addition of two matrices */
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,r1,c1,r2,c2,k=0,s[10][10]={0};
	printf("Enter no rows and no cols of 1st matrix\n");
	scanf("%d%d",&r1,&c1);
    printf("Enter no rows and no cols of 2nd matrix\n");
	scanf("%d%d",&r2,&c2);
if(c1==r2)
{
	
	printf("Enter 1st matrix elements\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter 2nd matrix elements\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		    scanf("%d",&b[i][j]);
	}
	printf("Product of given matrices is\n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
			s[i][j]=s[i][j]+a[i][k]*b[k][j];
		}
	}
	for(i=0;i<r1;i++)
	{
		 for(j=0;j<c2;j++)
		   {
		      printf("%d ",s[i][j]);
           }
		   printf("\n");
	}
}
else
   printf("Matrix multiplication is not possible\n");
	return 0;
}
