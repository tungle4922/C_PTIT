#include <stdio.h>
#include <string.h>
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
			if (a%2==0)
			{
				int demc=0,deml=0;
				for (int i=0;i<a;i++)
				{
					if ((int)(s[i]-'0')%2==0) demc++;
					else deml++;
				}
				if (demc>deml) printf("YES\n");
				else printf("NO\n");
			}
			else
			{
				int demc=0,deml=0;
				for (int i=0;i<a;i++)
				{
					if ((int)(s[i]-'0')%2==0) demc++;
					else deml++;
				}
				if (deml>demc) printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}
