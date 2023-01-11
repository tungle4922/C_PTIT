#include<stdio.h>
#include<string.h>
char *arr[1000];
int dem1=0;
int demtu(char *t)
{	
	int dem=0; 
	for (int i=0;i<dem1;i++)
	{
		if (strcmp(t,arr[i])==0) dem++;
	}
	return dem;
} 
int loaibotrung(char *t,char *b[1000],int d)
{
	for(int i=0;i<d;i++)
		if(strcmp(t,b[i])==0) return 0;
	return 1;
}
int main() {
	char s[1000],m[1000];
	gets(s);
	for (int i=0;i<strlen(s);i++) 
		if (s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
	strcpy(m,s);
	int k=0;
	char *token=strtok(s," ");
	while(token!=NULL)
	{
		dem1++;
		arr[k++]=token;
		token=strtok(NULL," ");
	}
	char *n[1000];
	int j=0;
	char *token1=strtok(m," ");
	while(token1!=NULL)
	{
		n[j++]=token1;
		token1=strtok(NULL," ");
	}
	int d=0;
	char *b[1000];
	for (int i=0;i<j;i++)
	{
		if (loaibotrung(n[i],b,d)) b[d++]=n[i];
	}
	for (int i=0;i<d;i++)
	{
		printf("%s %d\n",b[i],demtu(b[i]));
	}
}
