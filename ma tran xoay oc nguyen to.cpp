#include<stdio.h>
#include<math.h>
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
int main() {
	int n,m[20][20],row,col,a,b,t,arr[500],f=0;
	long long k;
	for (k=2;k<3000;k++)
	{
		if (snt(k)) arr[f++]=k; 
	}
	scanf("%d",&t);
	for (k=1;k<=t;k++)
	{
		scanf("%d",&n);
		printf("Test %d:\n",k);
		f=0;
		a=arr[f];row=n-1;col=n-1;b=0;
		while(b<=n/2)
		{
			for (int i=b;i<=col;i++) m[b][i]=arr[f++];
			for (int i=b+1;i<=row;i++) m[i][col]=arr[f++];
			for (int i=col-1;i>=b;i--) m[row][i]=arr[f++];
			for (int i=row-1;i>b;i--) m[i][b]=arr[f++];
			b++;row--;col--;
		}
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}
	}
}
