#include <stdio.h>
#include <math.h>
int main() {
	int a,n,b,c;
	scanf("%d",&a);
	for (int i=1;i<=a;i++)
	{
		int dem=0;
		scanf("%d",&n);
		b=n;
		c=sqrt(b);
		if (n%2==1) printf("0\n");
		else
		{
			for (int j=1;j<=sqrt(n);j++)
			{
				if (n%j==0)
				{
					if(j%2==0) dem++;
					if((n/j)%2==0) dem++;
				}
			}
			if (c*c==b) printf("%d\n",dem-1);
			else printf("%d\n",dem);	
		}		
	}
}
