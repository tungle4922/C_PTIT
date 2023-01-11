#include<stdio.h>
int main() {
	int n,m[100][100],row,col,a,b;
	scanf("%d",&n);
	a=n;row=2*n-2;col=2*n-2;b=0;
	while(b<=n)
	{
		for (int i=b;i<=col;i++) m[b][i]=a;
		for (int i=b+1;i<=row;i++) m[i][col]=a;
		for (int i=col-1;i>=b;i--) m[row][i]=a;
		for (int i=row-1;i>b;i--) m[i][b]=a;
		a--;b++;row--;col--;
	}
	for (int i=0;i<2*n-1;i++)
	{
		for (int j=0;j<2*n-1;j++)
		{
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
}
