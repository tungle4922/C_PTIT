#include<stdio.h>
int main() {
	long long n,m[200][200],row,col,a,b;
	long long d[200],c=0;
	d[0]=0;d[1]=1;
	for (int i=2;i<200;i++)
	{
		d[i]=d[i-1]+d[i-2];
	}
	scanf("%lld",&n);
	a=1;row=n-1;col=n-1;b=0;
	while(b<=n/2)
	{
		for (int i=b;i<=col;i++) m[b][i]=d[c++];
		for (int i=b+1;i<=row;i++) m[i][col]=d[c++];
		for (int i=col-1;i>=b;i--) m[row][i]=d[c++];
		for (int i=row-1;i>b;i--) m[i][b]=d[c++];
		b++;row--;col--;
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("%lld ",m[i][j]);
		}
		printf("\n");
	}
}
