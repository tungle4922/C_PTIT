#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct thongtinsv{
	int ma;
	char ten[1000];
	char ngaysinh[1000];
	double diem1;
	double diem2;
	double diem3;
} ttsv;
ttsv ds[1000];
int main() {
	int n;
	scanf("%d\n",&n);
	for (int i=0;i<n;i++)
	{
		ds[i].ma=i+1;      // gan ma sv
		gets(ds[i].ten);			//nhap ten
		gets(ds[i].ngaysinh);		//nhap ngay sinh
		scanf("%lf\n",&ds[i].diem1);		//nhap diem tn
		scanf("%lf\n",&ds[i].diem2);		//nhap diem th
		if(i==n-1) scanf("%lf",&ds[i].diem3);
		else scanf("%lf\n",&ds[i].diem3);     //nhap diem t3
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ds[i].diem1+ds[i].diem2+ds[i].diem3<ds[j].diem1+ds[j].diem2+ds[j].diem3)
			{
				ttsv t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
	for (int i=0;i<n;i++) printf("%d %s %s %.1lf\n",ds[i].ma,ds[i].ten,ds[i].ngaysinh,ds[i].diem1+ds[i].diem2+ds[i].diem3);
}
