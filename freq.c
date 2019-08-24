#include<stdio.h>
int main()
{
	char s[10],c;
	int i,cnt=0;
	gets(s);
	scanf("%c",&c);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
