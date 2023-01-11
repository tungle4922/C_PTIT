#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	while(1)
	{
		int n;
		char s1[1000],s2[1000],s3[2000];
		scanf("%d",&n);
		if(n==0) break;
		scanf("\n%s\n",s1);
		gets(s2);
		gets(s3);
		char s12[2000];
		int a=strlen(s1);
		int u=0;
		for(int i=0;i<a;i++) s12[u++]=s1[i];
		for(int i=0;i<a;i++) s12[u++]=s2[i];
		s12[u]=NULL;
		int dem=0;
		while(1)
		{
			char s[2000];
			int h=0;
			for(int i=0;i<a;i++)
			{
				s[h++]=s2[i];
				s[h++]=s1[i];
			}
			s[h]=NULL;
			dem++;
			if(strcmp(s,s3)==0) break;
			if(strcmp(s,s12)==0) 
			{
				dem=0;
				break;
			}
			for(int i=0;i<a;i++) 
			{
				s1[i]=s[i];
				s2[i]=s[i+a];
			}
		}
		//printf("%s %s\n",s,s12);
		if(dem>0) printf("%d\n",dem);
		else printf("-1\n");
	}
}
