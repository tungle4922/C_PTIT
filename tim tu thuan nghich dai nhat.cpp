#include<stdio.h>
#include<string.h>
typedef struct xauthuannghich{
	char xau[100];
} xtn;
xtn ds[100000]; //chua cac tu thuan nghich
typedef struct xauthuannghich1{
	char xau[100];
} xtn1;
xtn1 ds1[100000]; //chua cac tu thuan nghich dai nhat
typedef struct xauthuannghich2{
	char xau[100];
	int dem;
} xtn2;
xtn2 ds2[100000]; //chua cac tu thuan nghich dai nhat va khong co tu nao trung nhau
int ktthuannghich(char s[])
{
	char a[100],j=0;
	for(int i=strlen(s)-1;i>=0;i--) a[j++]=s[i];
	a[j]=NULL;
	if(strcmp(a,s)==0) return 1;
	return 0;
}
int main() {
	char s[100];
	char a[2]="0";
	int h=0;
	while(scanf("%s",&s)!=-1)
	{
		if(strcmp(s,a)==0) break;
		if(ktthuannghich(s)) strcpy(ds[h++].xau,s);
	} //luu tu thuan nghich vao xtn
	int max=0;
	for(int i=0;i<h;i++)
	{
		if(max<strlen(ds[i].xau)) max=strlen(ds[i].xau);
	}
	int u=0;
	for(int i=0;i<h;i++)
	{
		if(strlen(ds[i].xau)==max) strcpy(ds1[u++].xau,ds[i].xau);
	} //luu tu cac thuan nghich dai nhat vao xtn1
	int k=0,dem1=1;
	for(int i=0;i<u;i++)
	{
		if(strcmp(ds1[i].xau,ds1[i+1].xau)==0 && i!=u-1) dem1++;
		else
		{
			strcpy(ds2[k].xau,ds1[i].xau);
			ds2[k].dem=dem1;
			k++;
			dem1=1;
		}
	} //luu tu thuan nghich dai nhat vao xtn2 va so lan xuat hien cua no
	for(int i=0;i<k;i++) printf("%s %d\n",ds2[i].xau,ds2[i].dem);
}
// cau nay test chua chat
