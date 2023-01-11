#include<stdio.h>
#include<string.h>
int loaibotrung(char *t,char *n[201],int d)
{
	for(int i=0;i<d;i++)
		if(strcmp(t,n[i])==0) return 0;
	return 1;
}
int main() {
	int c;
	scanf("%d\n",&c);
	while(c--)
	{
		char s1[201],s2[201];
		gets(s1);
		gets(s2);
		int k=0;
		int dem2=0;
		char *a[201];
		char *token=strtok(s2," ");
		while(token!=NULL)
		{
			dem2++;
			a[k++]=token;
			token=strtok(NULL," ");
		} 
		char *b[201]; int j=0;
		char *token1=strtok(s1," ");
		while(token1!=NULL)
		{
			int dem=0;
			for (int i=0;i<dem2;i++)
				if (strcmp(token1,a[i])==0) dem++;
			if (dem==0) b[j++]=token1;
			token1=strtok(NULL," ");
		} 
		for (int i=0;i<j-1;i++) {
			for (int f=i+1;f<j;f++)
			{
				if (strncmp(b[i],b[f],1)>0)
				{
					char *t=b[i];
					b[i]=b[f];
					b[f]=t;
				}	
			}
		} 
		char *n[201]; int d=0;
		for (int i=0;i<j;i++)
		{
			if (loaibotrung(b[i],n,d)) n[d++]=b[i];
		} 
		for (int i=0;i<d-1;i++) printf("%s ",n[i]);
		printf("%s",n[d-1]);
		printf("\n");
	}
}
