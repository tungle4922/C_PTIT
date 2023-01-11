#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct sapxepmathang {
	int stt;
	char ten[10000],nhom[10000];
	double buy,sell;
} sx;
sx ds[10000];
int main() {
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		ds[i].stt=i+1;  //gan stt
		gets(ds[i].ten);     // nhap ten mat hang
		gets(ds[i].nhom);    //nhap ten nhom hang
		scanf("%lf\n",&ds[i].buy);   //nhap gia mua
		if(i==n-1) scanf("%lf",&ds[i].sell);
		else scanf("%lf\n",&ds[i].sell);  //nhap gia ban
	}
    for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].sell-ds[i].buy<ds[j].sell-ds[j].buy)
			{
				sx t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++) printf("%d %s %s %.10g\n",ds[i].stt,ds[i].ten,ds[i].nhom,ds[i].sell-ds[i].buy);
}
