#include <stdio.h>
int main() {
	long long a,b,n,m[20];
	scanf("%lld",&a);
	for (int i=1;i<=a;i++)
	{	
		long long demtn=0,demth=0;
		scanf("%lld",&n);
		b=n;
		while (b>0)
		{
			b=b/10;
			demth++;
		}
		while (n>0)
		{
			for (int i=0;i<20;i++)
			{
				m[i]=n%10;
				n=n/10;		
			}
		}
		for (int i=0;i<demth;i++)
		{
			if(m[i]>=m[i+1]) demtn++;
		}
		/*for (int i=0;i<demth;i++)
		{
			printf("%d ",m[i]);
	    }
		printf("\n%d %d",demth,demtn);*/
		if (demtn==demth) printf("YES\n");
		else printf("NO\n");
	}
}
