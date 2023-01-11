#include<stdio.h>
#include<string.h>
int main() {
	char s[51],a[51];
	gets(s);
	for (int i=0;i<strlen(s);i++)
	{
		if (s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
	}
	strcpy(a,s);
	int dem=0;
	char *token=strtok(s," ");
	while(token!=NULL)
	{
		dem++;
		token=strtok(NULL," ");
	}
	int b=strlen(a),dem1=0;
	if (a[0]!=' ')                     // Truong hop neu khong co dau cach dau dong
	{
		printf("%c",a[0]);
		for (int i=0;i<b;i++)
		{
			if (a[i]==' ' && a[i+1]!=' ') 
			{
				dem1++;
				if (dem1==dem-1) 
				{
					for (int j=i+1;j<b;j++) 
					{
						if(a[j]>='a' && a[j]<='z') printf("%c",a[j]);
					}
				}
				else 
				{
					if (a[i+1]>='a' && a[i+1]<='z') printf("%c",a[i+1]);
				}
			}
		}
		printf("@ptit.edu.vn");  
	}
	else		// Truong hop neu co dau cach dau dong
	{
		for (int i=0;i<b;i++)
		{
			if (a[i]==' ' && a[i+1]!=' ') 
			{
				dem1++;
				if (dem1==dem) 
				{
					for (int j=i+1;j<b;j++) 
					{
						if(a[j]>='a' && a[j]<='z') printf("%c",a[j]);
					}
				}
				else 
				{
					if (a[i+1]>='a' && a[i+1]<='z') printf("%c",a[i+1]);
				}
			}
		}
		printf("@ptit.edu.vn");
	}
}
