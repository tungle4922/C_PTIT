#include<stdio.h>
#include<string.h>
int main() {
	int p;
	char s1[101],s2[101];
	gets(s1);
	gets(s2);
	int a=strlen(s1);
	int b=strlen(s2);
	scanf("%d",&p);
	if (p==a+1)
	{
		printf("%s%s",s1,s2);
	}
	else
	{
		for (int i=0;i<a;i++)
		{
			if(i==p-1)
			{
				for (int j=0;j<b;j++) printf("%c",s2[j]);
			}
			printf("%c",s1[i]);
		}
	}
}
