#include<stdio.h>
int main()
{
	char s[20];
	int i,j,l,flag=0;
	printf("enter string name");
	gets(s);
	l=strlen(s)
	for(i=0;j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("string is palindrome");
	else
	printf("it is not a palindrome");
	return 0;
}
