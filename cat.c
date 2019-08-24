#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	int i,l1,l2,l,j;
	gets(s1);
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
	l1=i;
	for(i=0;s2[i]!='\0';i++);
	l2=i;
	l=l1+l2;
	for(i=l1,j=0;i<l,j<l2;i++,j++)
	{
		
		s1[i]=s2[j];
	}
	/*for(i=0;i<l;i++)
	{
		printf("%c",s1[i]);
	}*/
	puts(s1);

	return 0;
	
}
