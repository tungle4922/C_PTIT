#include<stdio.h>
#include<string.h>
#include<math.h>
int ktratn(char s[])
{
	int l=strlen(s);
	for (int i=0;i<l;i++)
	{
		if (s[i]!=s[l-i-1]) return 0;
	}
	return 1;
}
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++)
		if(a%i==0) return 0;
	return 1;
}
int ktsnt(char s[])
{
	int l=strlen(s);
	for (int i=0;i<l;i++)
	{
		if(snt((int)(s[i]-'0'))==0) return 0;
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
		if (ktratn(s) && ktsnt(s)) printf("YES\n");
		else printf("NO\n");
	}
}
