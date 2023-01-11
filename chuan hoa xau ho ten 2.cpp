#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[1000];
		gets(s);
   		int start,end;
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]!=' ')
			{
				start=i;
				break;
			}
		}           
		for(int i=strlen(s)-1;i>=0;i--)
		{
			if(s[i]!=' ')
			{
				end=i;
			 	break;
			}
		}
		char a[1000];
		int size=0;
		for(int i=start;i<=end;i++)
		{
			if(s[i]==' ' && s[i+1]==' ') continue;
			else
			{
				a[size]=s[i];
				size++;
			}
		}      // xoa khoang trang trong xau
		for (int i=0;i<strlen(a);i++) if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;  //doi ve ki tu thuong
   	 	for(int i=0;i<strlen(a);i++) 
   	 		if (a[i]==' ') a[i+1]=a[i+1]-32;   // viet hoa ki tu dau cua cac tu
   	 	for(int i=0;i<strlen(a);i++)
   	 	{
   	 		if (a[i]==' ') break;
   	 		a[i]-=32;
		}   // viet hoa tu dau tien
   	 	a[size]=NULL;
   	 	int c=0;
   	 	char *arr[1000];
   	 	char *token=strtok(a," ");
   	 	while(token!=NULL)
   	 	{
   	 		arr[c++]=token;
   	 		token=strtok(NULL," ");
		}
		for(int i=1;i<c-1;i++) printf("%s ",arr[i]);
		printf("%s, %s\n",arr[c-1],arr[0]);  // xuat output
	}
}
