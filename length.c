#include<stdio.h>
int main()
{
	char s[10];
	int i;
	gets(s);
	for(i=0;s[i]!='\0';i++);
	printf("%d",i);
	return 0;
}
