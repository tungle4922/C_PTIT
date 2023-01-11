#include <stdio.h>
#include <string.h>
int ktm(char t,char b[1000],int d)
{
	for (int i=0;i<d;i++)
		if (t==b[i]) return 0;
	return 1;
}
int main() {
	int t;
	scanf("%d\n",&t);
	for (int k=1;k<=t;k++)
	{
		int a,dem=0;
		char s[1000];
		gets(s);
		a=strlen(s);
		for (int i=0;i<a;i++)
			if (s[0]=='0' || s[i]<48 || s[i]>57) dem++;
		if (dem>0) printf("INVALID\n");
		else
		{
			int d=0;
			char b[1000];
			for (int i=0;i<a;i++)
			{
				if (ktm(s[i],b,d)) b[d++]=s[i];
			}
			if (d==10) printf("YES\n");
			else printf("NO\n");
		}
	}
}
