#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct pokemon{
	char ten[1000];
	int slcan,slco;
} pkm;
pkm ds[1000];
int main() {
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(ds[i].ten);         //nhap ten pokemon
		scanf("%d",&ds[i].slcan);    //nhap so luong vien da can de tien hoa pokemon
		if(i==n-1) scanf("%d",&ds[i].slco);
		else scanf("%d\n",&ds[i].slco);           //nhap so luong vien da co de tien hoa pokemon
	}
	int max=0,sum=0,arr[n];
	for(int i=0;i<n;i++)
	{
		int dem=0;
		while(ds[i].slco>=ds[i].slcan)
		{
			dem++;
			ds[i].slco=ds[i].slco-ds[i].slcan;
			ds[i].slco+=2;
		}
		arr[i]=dem;
		sum+=dem;
		if(dem>max) max=dem;
	}
	printf("%d\n",sum);          //tong so pkm tien hoa
	for(int i=0;i<n;i++)
	{
		if (arr[i]==max)
		{
			printf("%s",ds[i].ten);   //ten pokemon tien hoa nhieu nhat
			break;
		}
	}
}
