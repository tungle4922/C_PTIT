#include<stdio.h>
#include<string.h>
int ktuuthe(char s[])
{
	int a=strlen(s);
	int dem=0,demc=0,deml=0;
	for (int i=0;i<a;i++)
	{
		if(s[i]==' ') 
		{
			dem++;
			if ((int)(s[i-1]-'0')%2==0) demc++;
			else deml++;
		}
	}
	if ((int)(s[a-1]-'0')%2==0) demc=demc+1;
	else deml=deml+1;
	if (((dem+1)%2==0 && demc>deml) || ((dem+1)%2==1 && deml>demc)) return 1;
	return 0;
}
int main() {
	int t;
	scanf("%d\n",&t);
	for (int k=1;k<=t;k++)
	{
		char s[1000];
		gets(s);
		if(ktuuthe(s)) printf("YES\n");
		else printf("NO\n");
	}
}
