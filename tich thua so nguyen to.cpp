#include <stdio.h>
int ktm(int a,int b[100],int d)
{
	for (int i=0;i<d;i++)
		if (a==b[i]) return 0;
	return 1;
}
int main() {
	int a,n,m[100];
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d",&n);
		int j=2,t=0;
		while (n>1)
		{
			if (n%j==0)
			{
				m[t]=j;
				n/=j;
				t++;
			}
			if (n%j!=0) j++;
		}
		/*for (int f=0;f<t;f++) printf("%d ",m[f]);*/
		int d=0,b[100];
		for (int f=0;f<t;f++)
		{
			if (ktm(m[f],b,d)) b[d++]=m[f];
		}
		/*for (int f=0;f<d;f++) printf("%d ",b[f]);*/
		int tich=1;
		for (int f=0;f<d;f++) tich=tich*b[f];
		printf("%d\n",tich);
	}
}
