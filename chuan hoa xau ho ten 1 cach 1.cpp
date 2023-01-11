#include<stdio.h>
#include<string.h>
int main() {
	int t;
	char s[90];
	scanf("%d\n",&t);
	while(t--)
	{
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
		char a[90];
		int size=0;
		for(int i=start;i<=end;i++)
		{
			if(s[i]==' ' && s[i+1]==' ') continue;
			else
			{
				a[size]=s[i];
				size++;
			}
		}
   	 	for (int i=0;i<strlen(a);i++) if(a[i]>=65 && a[i]<=90) a[i]=a[i]+32;  //doi ve ki tu thuong
   	 	a[0]=a[0]-32;
   	 	for(int i=0;i<strlen(a);i++) 
   	 		if (a[i]==' ') a[i+1]=a[i+1]-32;   // viet hoa ki tu dau cua cac tu
   	 	a[size]=0;
   	 	for(int i=0;i<size;i++) printf("%c",a[i]);
   	 	printf("\n");
	}
}
