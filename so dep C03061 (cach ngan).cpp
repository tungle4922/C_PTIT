#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[20];
		gets(s);
		int a=strlen(s);
		if((s[0]-'0')==2*(s[a-1]-'0') || (s[a-1]-'0')==2*(s[0]-'0'))
		{
			int kt=1,k=a-2;
			for(int i=1;i<=(a-2)/2;i++)
			{
				if(s[i]!=s[k--]) 
				{
					kt=0;
					break;
				}
			}
			if(kt==1) printf("YES\n");
			else printf("NO\n");
		}
		else printf("NO\n");
	}
}
