#include<stdio.h>
int main() {
	int t,n;
	int m[11]={1,2,5,10,20,50,100,200,500,1000,100001};
	scanf("%d",&t);
	for (int k=1;k<=t;k++)
	{
		int a,dem=0,hieu;
		scanf("%d",&n);
		for (int i=0;i<11;i++)
		{
			if (n<m[i]) 
			{
				a=i-1;
				break;
			}
		}
		while(n>0)
		{
			if (n>=m[a]) 
			{
				hieu=n-m[a];
				n=hieu;
				dem++;
			}
			if (hieu<m[a]) a--;
		}
		printf("%d\n",dem);
	}
}
