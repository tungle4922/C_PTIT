#include <stdio.h>
int main() {
	int a,n,m[100];
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d",&n);
		for (int i=0;i<n;i++)
		scanf("%d",&m[i]);	
			int dem=0;
			for (int i=0;i<n;i++)
			{
				if(m[i]==m[n-1-i]) dem++;
			}
			if (dem==n) printf("YES\n");
			else printf("NO\n");
	}
}
