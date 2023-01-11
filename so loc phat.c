#include <stdio.h>;
int main() {
	long long a,n,i,b,jc=1;
	scanf("%lld",&a);
	for(i=1;i<=a;i++)
	{	
		int c=1;
		scanf("%lld",&n);
		while (n>0)
		{	
			b=n%10;
			if (b!=0 && b!=6 && b!=8) c=0;
			n=n/10;
		}
		if (c==0) printf("NO\n");
		else printf("YES\n");
    }
}
