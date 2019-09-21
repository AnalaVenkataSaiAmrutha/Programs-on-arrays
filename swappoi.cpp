#include<stdio.h>
int main()
{
	int a[10],b[10],n,temp;
	int *ptr,i,*d,j;
	ptr=a;
	d=b;
	printf("Enter two  array size:");
	scanf("%d",&n);
	printf("Enter 1st array elements");
	for(j=0;j<n;j++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	printf("Enter 2nd array elements");
	for(j=0;j<n;j++)
	{
		scanf("%d",d);
		d++;
	}
	
	ptr=a;
	d=b;
	for(i=0;i<n;i++)
	{
	   temp=*ptr;
	   *ptr=*d;
	   *d=temp;
		ptr++;
		d++;
	}
	ptr=a;
	d=b;
	printf("The swaped elements of two arrays\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
		
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(d+i));
		
	}
	return 0;
}
