#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[100];
		int m[100];
		gets(s);
		int a=strlen(s);
		for(int i=0;i<a;i++)
		{
			if(s[i]=='I') m[i]=1;
			else if (s[i]=='V') m[i]=5;
			else if (s[i]=='X') m[i]=10;
			else if (s[i]=='L') m[i]=50;
			else if (s[i]=='C') m[i]=100;
			else if (s[i]=='D') m[i]=500;
			else if (s[i]=='M') m[i]=1000;
		}
		int b=m[a-1];
		for(int i=a-1;i>0;i--)
		{
			if(m[i]>m[i-1]) b=b-m[i-1];
			else b=b+m[i-1];
		}
		printf("%d\n",b);
	}
}
