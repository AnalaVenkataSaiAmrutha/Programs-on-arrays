#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr,n,key;
	int *ptr,i,cnt=0;
	printf("Enter array size:");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	printf("Enter the  element to be searched:");
	scanf("%d",&key);
	ptr=&key;
	for(i=0;i<n;i++)
	{
		if(*ptr==*(arr+i))
		{
	    	printf("Search is found\n");
	    	cnt++;
		    break;
     	}
    }
		if(cnt==0)
		printf("Search is not found\n");
		
	
	return 0;
}
