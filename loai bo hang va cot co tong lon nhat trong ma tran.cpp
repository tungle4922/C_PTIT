#include <stdio.h>
int main() {
	int a,b,c,m[10][10];
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		scanf("%d %d\n",&b,&c);
		int sum,max=0,sumtn,maxtn=0,t,u;
		for (int j=0;j<b;j++)
		{
			for (int k=0;k<c;k++)
			{
				scanf("%d",&m[j][k]);
			}
			printf("\n");
		}
		printf("Test %d:\n",i);
		for (int j=0;j<b;j++)
		{
			sum=0;
			for (int k=0;k<c;k++)
			{
				sum=sum+m[j][k];
			}
			if (max<sum) max=sum;
		}
		for (int j=0;j<b;j++)
		{
			sum=0;
			for (int k=0;k<c;k++)
			{
				sum=sum+m[j][k];
			}
			for (int k=0;k<c;k++)
			{
				if (sum==max) t=j;
			}
		}    
		//printf("%d %d\n",t,max);
		//loai bo hang
		if (b==c)
		{
			for (int j=0;j<b;j++)
			{
				sumtn=0;
				for (int k=0;k<c;k++)
				{
					if (k==t) continue;
					sumtn=sumtn+m[k][j];
				}
				if (maxtn<sumtn) maxtn=sumtn;
			}
			for (int j=0;j<b;j++)
			{
				sumtn=0;
				for (int k=0;k<c;k++)
				{
					if (k==t) continue;
					sumtn=sumtn+m[k][j];
				}
				for (int k=0;k<c;k++)
				{
					if (k==t) continue;
					if (sumtn==maxtn) u=j;
				}			
			} 
			//printf("%d %d\n",u,maxtn);  
			//loai bo cot neu b==c
		}
		else
		{
			for (int j=0;j<c;j++)
			{
				sumtn=0;
				for (int k=0;k<b;k++)
				{
					if (k==t) continue;
					sumtn=sumtn+m[k][j];
				}
				if (maxtn<sumtn) maxtn=sumtn;
			}
			for (int j=0;j<c;j++)
			{
				sumtn=0;
				for (int k=0;k<b;k++)
				{
					if (k==t) continue;
					sumtn=sumtn+m[k][j];
				}
				for (int k=0;k<b;k++)
				{
					if (k==t) continue;
					if (sumtn==maxtn) u=j;
				}			
			} 
			//printf("%d %d\n",u,maxtn);  
			//loai bo cot neu c>b hoac c<b
		}
		for (int j=0;j<b;j++)
		{
			if (j==t) continue;
			for (int k=0;k<c;k++)
			{
				if (k==u) continue;
				printf("%d ",m[j][k]);
			}
			printf("\n");
		}
	} 		
}
