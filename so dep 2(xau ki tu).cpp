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
int ktdaucuoi(char s[])
{
	int l=strlen(s);
	for (int i=0;i<l;i++)
	{
		if ((int)(s[0]-'0')!=8 || (int)(s[l-1]-'0')!=8 || (int)(s[0]-'0')!=8 && (int)(s[l-1]-'0')!=8 ) return 0;
	}
	
	return 1;
}
int kttongcs(char s[])
{
	
	int l=strlen(s),sum=0;
	for (int i=0;i<l;i++)
	{
		sum+=(int)(s[i]-'0');
	}
	if (sum%10==0) return 1;
	else return 0;
}
int main() {
	int a;
	char s[600];
	scanf("%d\n",&a);
	for (int i=1;i<=a;i++)
	{
		gets(s);
		if (ktratn(s) && ktdaucuoi(s) && kttongcs(s)) printf("YES\n");
		else printf("NO\n");
	}
}
