#include<stdio.h>
#include<string.h>
int loaitn(char *t,char *b[100],int d)
{
	for (int i=0;i<d;i++)
		if (strcmp(t,b[i])==0) return 0;
	return 1;
}
int main(){
		char s[101],m[101];
		gets(s);
		strcpy(m,s);
		int dem=0;
		char *token=strtok(s," ");
		while(token!=NULL)
		{
			dem++;
			token=strtok(NULL," ");
		}
		char *arr[100];
		int i=dem-1;
		char *token1=strtok(m," ");
		while(token1!=NULL)
		{
			arr[i--]=token1;
			token1=strtok(NULL," ");
		}
		//printf("%d\n",dem);
		//for (int j=dem-1;j>=0;j--) printf("%s\n",arr[j]);
		int d=0;
		char *b[100];
		for (int j=dem-1;j>=0;j--)
		{
			if (loaitn(arr[j],b,d)) b[d++]=arr[j];
		}
		for (int j=0;j<d;j++) printf("%s ",b[j]);
}
