#include<stdio.h>
#include<string.h>
typedef struct tunhapvao{
	char xau[100];
} tnv;
tnv ds[100000]; //chua cac tu nhap vao
typedef struct tudainhat{
	char xau[100];
} tdn;
tdn ds1[100000]; //chua cac tu dai nhat
typedef struct tudainhat1{
	char xau[100];
	int dem;
} tdn1;
tdn1 ds2[100000]; //chua cac tu dai nhat va khong co tu nao trung nhau
int main() {
	char s[100];
	//char a[2]="0";
	int max=0,h=0;
	while(scanf("%s",&s)!=-1)
	{
		//if(strcmp(s,a)==0) break;
		strcpy(ds[h++].xau,s); //luu xau nhap vao vao tnv
		if(max<strlen(s)) max=strlen(s);
	}
	int u=0;
	for(int i=0;i<h;i++)
	{
		if(strlen(ds[i].xau)==max) strcpy(ds1[u++].xau,ds[i].xau); //luu tu dai nhat vao tdn
	}
	int k=0;
	for(int i=0;i<u;i++)
	{
		int kt=1;
		for(int j=0;j<i;j++)
		{
			if(strcmp(ds1[i].xau,ds1[j].xau)==0) 
			{
				kt=0;
				break;
			}
		}
		if(kt==1) strcpy(ds2[k++].xau,ds1[i].xau);     //luu tu dai nhat vao tdn1
	}
	for(int i=0;i<k;i++)
	{
		int dem=0;
		for(int j=0;j<u;j++)
		{
			if(strcmp(ds2[i].xau,ds1[j].xau)==0) dem++;
		}
		ds2[i].dem=dem;   
	}                                             //dem vao luu so lan xuat hien cua tu dai nhat vao tdn1
	for(int i=0;i<k;i++) printf("%s %d %d\n",ds2[i].xau,strlen(ds2[i].xau),ds2[i].dem);
}
