/* Transpose of a matrice */
#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("Enter no rows and no cols\n");
	scanf("%d%d",&r,&c);
	printf("Enter the matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	}

	printf("Transpose of given matrice is\n");
	
	for(i=0;i<c;i++)
	{
		 for(j=0;j<r;j++)
		   printf("%d ",a[j][i]);
		   printf("\n");
	}
	return 0;
}
