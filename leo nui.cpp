#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int sumU=0,sumD=0;
	int minU=50001,minD=50001;
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		sumU+=a;
		sumD+=b;
		if(a<minU) minU=a;
		if(b<minD) minD=b;
	}
	sumU+=minD;      //tong tg len = tong tg len + tg xuong nho nhat 
	sumD+=minU;		//tong tg xuong = tong tg xuong + tg len nho nhat 
	if(sumU<sumD) printf("%d",sumD);
	else printf("%d",sumU);
}
//bai nay test chua chat 
