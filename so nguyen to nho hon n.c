#include <stdio.h>
#include <math.h>
int snt(int n);
int main() {
	int n,i;
	scanf("%d",&n);
	for (i=2;i<=n;i++)
	{
		if (snt(i)) printf("%d\n",i);
	}
}
int snt(int n)
{	
	int i;
	if (n<2) return 0;
	for (i=2;i<=sqrt(n);i++)	if (n%i==0) return 0;
	return 1;
}
