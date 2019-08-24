#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	int i=0,cnt=0;
    gets(s1);
    gets(s2);
    while(s1[i]!='\0'||s2[i]!='\0')
    {
    	if(s2[i]!=s1[i]) 
		 cnt++;  	
		i++;
	}
	if(cnt==0)
	printf("Equal");
	else
	printf("Not Equal");
	
	return 0;
}
