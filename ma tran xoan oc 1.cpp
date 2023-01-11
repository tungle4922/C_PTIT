#include<stdio.h>
int main() {
	int n,m[200][200],row,col,a,b;
	scanf("%d",&n);
	a=1;row=n-1;col=n-1;b=0;
	while(b<=n/2)
	{
		for (int i=b;i<=col;i++) m[b][i]=a++;
		for (int i=b+1;i<=row;i++) m[i][col]=a++;
		for (int i=col-1;i>=b;i--) m[row][i]=a++;
		for (int i=row-1;i>b;i--) m[i][b]=a++;
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
