#include <stdio.h>
int main() {
	int a,n,m[30];
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		int dem=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++) scanf("%d",&m[i]);
		for(int i=0;i<n;i++)
		{
			if (m[i]==m[i+1]) dem++;
		}
		printf("%d\n",dem);
	}
}
