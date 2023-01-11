#include<stdio.h>
#include<string.h>
int ktdoixung(char s[])  
{
	int a=strlen(s);
	int dem=0,b=a-1;
	if (a%2==0)
	{
		for (int i=0;i<a/2;i++)
		{
			if (s[i]!=s[b--]) dem++;
		}
		if (dem==1) return 1;
	}
	else 
	{
		for (int i=0;i<(a-1)/2;i++)
		{
			if (s[i]!=s[b--]) dem++;
		}
		if (dem==1 || dem==0) return 1;
	}
	return 0;
}
int main() {
	int t;
	char s[21];
	scanf("%d\n",&t);
	for(int i=1;i<=t;i++)
	{
		gets(s);
		if (ktdoixung(s)) printf("YES\n");
		else printf("NO\n");
	}
}
