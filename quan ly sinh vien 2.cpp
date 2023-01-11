#include<stdio.h>
typedef struct quanlysv{
	int stt;
	char ten[1000];
	double diemA,diemB,diemC;
} qlsv;
qlsv ds[1000];
int main() {
	int t;
	int h=0;
	int start=0;
	while(1)
	{
		scanf("%d",&t); 
		if(t==1)
		{
			int a;
			scanf("\n%d\n",&a);         //nhap so sv them moi
			h+=a;
			for(int i=start;i<h;i++)
			{
				ds[i].stt=i+1;
				gets(ds[i].ten);
				if(i==h-1) scanf("%lf%lf%lf",&ds[i].diemA,&ds[i].diemB,&ds[i].diemC);
				else scanf("%lf%lf%lf\n",&ds[i].diemA,&ds[i].diemB,&ds[i].diemC);
			}   //nhap thong tin sv
			printf("%d\n",a);      //so sinh vien them moi
			start+=a;
		}
		else if(t==2)
		{
			int b;
			scanf("\n%d\n",&b);           //nhap ma sv can sua
			for(int i=0;i<h;i++)
			{
				if(ds[i].stt==b)
				{
					gets(ds[i].ten);
					scanf("%lf%lf%lf",&ds[i].diemA,&ds[i].diemB,&ds[i].diemC);
					break;
				}
			}   // sua thong tin sv
			printf("%d\n",b);          //ma sv duoc sua
		}
		else if(t==3)
		{
			for(int i=0;i<h;i++) 
			{
				if(ds[i].diemA<=ds[i].diemB && ds[i].diemB<=ds[i].diemC) 
					printf("%d %s %.1lf %.1lf %.1lf\n",ds[i].stt,ds[i].ten,ds[i].diemA,ds[i].diemB,ds[i].diemC);
			}
			break;
		}
	}
}
