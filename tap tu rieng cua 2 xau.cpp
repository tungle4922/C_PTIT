#include<stdio.h>
#include<string.h>
char *a[101];
int dem2=0;
int ktxau(char *t)
{
	int dem=0;
	for (int i=0;i<dem2;i++)
		if (strcmp(t,a[i])==0) dem++;
	if (dem>0) return 0;
	return 1;
}
int loaibotrung(char *t,char *n[101],int d)
{
	for(int i=0;i<d;i++)
		if(strcmp(t,n[i])==0) return 0;
	return 1;
}
int main() {
	char s1[101],s2[101];
	gets(s1);
	gets(s2);
	int k=0;
	char *token=strtok(s2," ");
	while(token!=NULL)
	{
		dem2++;
		a[k++]=token;
		token=strtok(NULL," ");
	} //cat chuoi s2 luu vao mang a
	char *b[101]; int j=0;
	char *token1=strtok(s1," ");
	while(token1!=NULL)
	{
		if (ktxau(token1)) b[j++]=token1;
		token1=strtok(NULL," ");
	} //cat chuoi s1 luu cac phan tu khong trung voi mang a vao mang b
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
	} //sap xep lai mang b theo thu tu bang chu cai
	char *n[101]; int d=0;
	for (int i=0;i<j;i++)
	{
		if (loaibotrung(b[i],n,d)) n[d++]=b[i];
	}  //loai bo phan tu trung nhau trong mang b luu vao mang n
	for (int i=0;i<d;i++) printf("%s ",n[i]);
}

