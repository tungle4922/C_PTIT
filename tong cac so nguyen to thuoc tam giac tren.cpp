#include<stdio.h>
#include<math.h>
int snt(int n)
{
	if (n<=1) return 0;
	for (int i=2;i<=sqrt(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main() {
	int n,m[100][100],sum=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (snt(m[i][j]) && j>=i) sum=sum+m[i][j];
		}
	}
	printf("%d",sum);
}
