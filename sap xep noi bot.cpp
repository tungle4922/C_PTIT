#include <stdio.h>
int main() {
	int n,m[100];
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for (int i=0;i<n-1;i++)
	{
		printf("Buoc %d: ",i+1);
		for(int j=0;j<n-i-1;j++)
		{
			if (m[j]>m[j+1])
			{
				int t=m[j];
				m[j]=m[j+1];
				m[j+1]=t;
			}
		}
		for (int j=0;j<n;j++) printf("%d ",m[j]);
		printf("\n");
		int dem=0;
		for (int j=0;j<n-1;j++) if(m[j]>m[j+1]) dem++;
		if (dem==0) break;
	}
}
