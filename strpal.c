#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int a;
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	a=strcmp(s1,s2);
	
	if(a==0)
	{
		printf("It is a palindrom");
	}
	else
	   printf("It is not a palindrom");
	return 0;
}
