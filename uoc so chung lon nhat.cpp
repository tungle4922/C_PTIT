#include <stdio.h>
int ucln(int a,int b)
{
	if (b==0) return a;
	return ucln(b,a%b);
}
int main() {
	int n,a,b;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		scanf("%d%d",&a,&b);
		printf("%d\n",ucln(a,b));
	}
}
