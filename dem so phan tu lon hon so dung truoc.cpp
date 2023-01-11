#include <stdio.h>
int main() {
	int a,n,m[51];
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d",&n);
		for (int j=0;j<n;j++) scanf("%d",&m[j]);
		int dem=0;
		for (int j=0;j<n;j++)
		{	
			int demtn=0;
			for (int f=0;f<j;f++)
			{
				if(m[j]>=m[f]) demtn++;
			}
			if (demtn==j) dem++;
		}
		printf("%d\n",dem);
	}
}
