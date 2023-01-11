#include<stdio.h>
#include<string.h>
int ktratn(char s[])
{
	int l=strlen(s);
	for (int i=0;i<l;i++)
	{
		if (s[i]!=s[l-i-1]) return 0;
	}
	return 1;
}
int ktrachan(char s[])
{
	int l=strlen(s);
	for (int i=0;i<l;i++)
	{
		if((int)(s[i]-'0')%2==1) return 0;
	}
	return 1;
}
int main() {
	int a;
	char s[600];
	scanf("%d\n",&a);
	for (int i=1;i<=a;i++)
	{
		gets(s);
		if (ktrachan(s) && ktratn(s)) printf("YES\n");
		else printf("NO\n");
	}
}
