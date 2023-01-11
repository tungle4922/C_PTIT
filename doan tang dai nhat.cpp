#include<stdio.h>
int main() {
	int t,n,m[100];
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		scanf("%d",&n);
		for (int i=0;i<n;i++) scanf("%d",&m[i]);
		printf("Test %d:\n",k);
		int dem=0,max=0;
		m[n]=-1;
		for (int i=0;i<n+1;i++)
		{
			if(m[i]<m[i+1]) dem++;
			else
			{
				if (max<dem) max=dem;
				dem=0;
			}
		}
		printf("%d\n",max+1);
		int dem1=0,a;
		for (int i=0;i<n+1;i++)
		{
			if(m[i]<m[i+1]) dem1++;
			else
			{
				if (dem1==max) 
				{
					for (int j=i-max;j<=i;j++) printf("%d ",m[j]);
					printf("\n");
				}	
				dem1=0;
			}
		}
	}
}
