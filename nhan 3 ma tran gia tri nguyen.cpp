#include<stdio.h>
int main() {
	int m,n,p,q;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	int A[m][n],B[n][p],C[p][q],AB[m][p];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++) scanf("%d",&A[i][j]);
	for(int i=0;i<n;i++)
		for(int j=0;j<p;j++) scanf("%d",&B[i][j]);
	for(int i=0;i<p;i++)
		for(int j=0;j<q;j++) scanf("%d",&C[i][j]);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			int sum=0;
			for(int k=0;k<n;k++) sum+=A[i][k]*B[k][j];
			AB[i][j]=sum;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
		{
			int sum=0;
			for(int k=0;k<p;k++) sum+=AB[i][k]*C[k][j];
			printf("%d ",sum);
		}
		printf("\n");
	}
}
