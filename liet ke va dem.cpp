#include<stdio.h>
#include<math.h>
long long m[100000]; // mang chua cac so khong giam
int ktsokhonggiam(long long a)
{
	int b;
	while(a>0)
	{
		b=a%10;
		a/=10;
		if(b<a%10) return 0;
	}
	return 1;
}
typedef struct sokhonggiam{
	int dem,stt;
	long long skg;
} skg;
skg ds[100000];
int main() {
	long long t;
	int h=0;  
	int u=0;
	while(scanf("%lld",&t)!=-1)
	{
		//if(t==0) break;
		if(ktsokhonggiam(t)==0) continue;
		m[h++]=t;
	}
	int k=0,stt=1;
	for(int i=0;i<h;i++)
	{
		int kt=1;
		for(int j=0;j<i;j++)
		{
			if(m[i]==m[j])
			{
				kt=0;
				break;
			}
		}
		if(kt==1) 
		{
			ds[k].skg=m[i];
			ds[k].stt=stt++;
			k++;
		}
	}// luu so khong giam vao skg va khong co gia tri nao trung nhau
	for(int i=0;i<k;i++)
	{
		int dem=0;
		for(int j=0;j<h;j++)
		{
			if(ds[i].skg==m[j]) dem++;
		}
		ds[i].dem=dem;
	}// dem so lan xuat hien cua so khong giam
	for(int i=0;i<k-1;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(ds[i].dem<ds[j].dem)
			{
				skg t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	} // sap xep giam dan theo so lan xuat hien
	for(int i=0;i<k-1;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(ds[i].dem==ds[j].dem && ds[i].stt>ds[j].stt)
			{
				skg t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	} // sap xep giam dan theo so lan xuat hien va stt
	for(int i=0;i<k;i++) printf("%lld %d\n",ds[i].skg,ds[i].dem);
}
