#include <stdio.h>
int giaithua(int n)
{
	if (n==1) return 1;
	return n*giaithua(n-1);
}
int main() {
	int a;
	scanf("%d",&a);
	for (int i=0;i<a;i++)
	{
		for (int j=0;j<a;j++)
		{
			if (j==0 || i==j)  printf("1 ");
			else if (j>0 && j<i) printf("%d ",giaithua(i)/(giaithua(j)*giaithua(i-j)));
			else printf(" ");
		}
		printf("\n");
	}
}
