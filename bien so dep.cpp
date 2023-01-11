#include<stdio.h>
#include<string.h>
int ktbienso(char s[])
{
	if (s[6]<s[7] && s[7]<s[8] && s[8]<s[10] && s[10]<s[11]) return 1;
	if (s[6]==s[7] && s[7]==s[8] && s[8]==s[10] && s[10]==s[11]) return 1;
	if (s[6]==s[7] && s[7]==s[8] && s[10]==s[11]) return 1;
	if ((s[6]=='6' || s[6]=='8') && (s[7]=='6' || s[7]=='8') && (s[8]=='6' || s[8]=='8') && (s[10]=='6' || s[10]=='8') && (s[11]=='6' || s[11]=='8')) return 1;
	return 0;
}
int main() {
	int t;
	char s[20];
	scanf("%d\n",&t);
	for (int k=1;k<=t;k++)
	{
		gets(s);
		if (ktbienso(s)) printf("YES\n");
		else printf("NO\n");
	}
}
