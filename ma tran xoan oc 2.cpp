#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n1,n2,m[200][200],row,col,a,b;
		scanf("%d %d",&n1,&n2);
		int arr[40000];
		for (int i=0;i<n1*n2;i++)
		{
			scanf("%d",&arr[i]);
		}
		a=1;row=n1-1;col=n2-1;b=0;
		int c=0;
		while(b<=(n1+n2)/2)
		{
			for (int i=b;i<=col;i++) 
			{
				m[b][i]=arr[c++];
				printf("%d\n",m[b][i]);
			}
			for (int i=b+1;i<=row;i++) 
			{
				m[i][col]=arr[c++];
				printf("%d\n",m[i][col]);
			}
			for (int i=col-1;i>=b;i--) 
			{
				m[row][i]=arr[c++];
				printf("%d\n",m[row][i]);
			}
			for (int i=row-1;i>b;i--) 
			{
				m[i][b]=arr[c++];
				printf("%d\n",m[i][b]);
			}
			b++;row--;col--;
		}
		for (int i=0;i<n1;i++)
		{
			for (int j=0;j<n2;j++)
			{
				printf("%d ",m[i][j]);
			}
			printf("\n");
		}
	}
}
