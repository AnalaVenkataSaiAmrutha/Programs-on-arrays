/* Merging of two one dimensional arrays */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,*b,*newarr,i,j,n1,n2,size;
	printf("Enter size of 1st array:\n");
	scanf("%d",&n1);
	printf("Enter size of 2nd array:\n");
	scanf("%d",&n2);
	a=(int*)malloc(n1*sizeof(int));
	b=(int*)malloc(n2*sizeof(int));
	printf("Enter 1st array elements:\n");
	for(i=0;i<n1;i++)
	   scanf("%d",&a[i]);
	printf("Enter 2nd array elements\n");
	for(i=0;i<n2;i++)
	   scanf("%d",&b[i]);
    size=n1+n2;
	newarr=(int*)malloc(size*sizeof(int));
	for(i=0;i<n1;i++)
     newarr[i]=a[i];
	for(i=0,j=n1;j<size;j++,i++)
	 newarr[j]=b[i];
	for(i=0;i<size;i++)
	  printf("%d\n",newarr[i]);
	   
	return 0;
}
