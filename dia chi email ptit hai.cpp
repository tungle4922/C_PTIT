#include<stdio.h>
#include<string.h>
char arr[100000];
int h=0;
void chuanhoaxau(char s[])
{
		int a=strlen(s);
		int start,end;
		for(int i=0;i<a;i++)
		{
			if(s[i]!=' ')
			{
				start=i;
				break;
			}
		}       // luu diem dau
		for(int i=a-1;i>=0;i--)
		{
			if(s[i]!=' ')
			{
				end=i;
				break;
			}
		}       // luu diem cuoi
		char b[100];
		int size=0;
		for(int i=start;i<=end;i++)
		{
			if(s[i]==' ' && s[i+1]==' ') continue;
			else 
			{
				b[size]=s[i];
				size++;
			}
		}
		for(int i=0;i<size;i++) if(b[i]>='A' && b[i]<='Z') b[i]=b[i]+32;       //viet thuong chu cai
		int dem=0;
		for(int i=0;i<size;i++) if(b[i]==' ') dem++;            // dem so space
		char c[100];
		int dem1=0,d=0;
		for(int i=0;i<size;i++) 
		{
			if(b[i]==' ') dem1++;
			if (dem1==dem)
			{
				for(int j=i+1;j<size;j++) c[d++]=b[j];
				c[d++]=b[0];
				break;
			}
		}             //luu ten va chu cai dau cua ho vao mang c
		int dem3=0;
		for(int i=0;i<size;i++)
		{
			if(b[i]==' ') dem3++;
			if(b[i]==' ' && dem3<dem) c[d++]=b[i+1];
		}         //luu chu cai dau cua ten dem vao mang c
		c[d]=NULL;
		h++;
		for(int i=0;i<h;i++) printf("%d %s\n",h,arr[i]);
}
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[100];
		gets(s);
		int a=strlen(s);
		int start,end;
		for(int i=0;i<a;i++)
		{
			if(s[i]!=' ')
			{
				start=i;
				break;
			}
		}       // luu diem dau
		for(int i=a-1;i>=0;i--)
		{
			if(s[i]!=' ')
			{
				end=i;
				break;
			}
		}       // luu diem cuoi
		char b[100];
		int size=0;
		for(int i=start;i<=end;i++)
		{
			if(s[i]==' ' && s[i+1]==' ') continue;
			else 
			{
				b[size]=s[i];
				size++;
			}
		}
		for(int i=0;i<size;i++) if(b[i]>='A' && b[i]<='Z') b[i]=b[i]+32;       //viet thuong chu cai
		int dem=0;
		for(int i=0;i<size;i++) if(b[i]==' ') dem++;            // dem so space
		char c[100];
		int dem1=0,d=0;
		for(int i=0;i<size;i++) 
		{
			if(b[i]==' ') dem1++;
			if (dem1==dem)
			{
				for(int j=i+1;j<size;j++) c[d++]=b[j];
				c[d++]=b[0];
				break;
			}
		}             //luu ten va chu cai dau cua ho vao mang c
		int dem3=0;
		for(int i=0;i<size;i++)
		{
			if(b[i]==' ') dem3++;
			if(b[i]==' ' && dem3<dem) c[d++]=b[i+1];
		}         //luu chu cai dau cua ten dem vao mang c
		c[d]=NULL;
		for(int i=0;i<d;i++) arr[h++]=c[i];
		arr[h]=' ';
}

