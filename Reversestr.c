#include<stdio.h>
int main()
{
	char s[10],i,n,len;
	printf("Enter the string");
    gets(s);
    for(i=0;s[i]!='\0';i++);
    len=i;
    for(i=len-1;i>=0;i--)
    {
    	printf("%c",s[i]);
	}
	s[i]='\0';

	return 0;
}
