#include <stdio.h>
int ktsostrong(int n);
int main() {
	long long a,b,i;
	scanf("%lld %lld",&a,&b);
	if (a<b) {
		for (i=a;i<=b;i++)
	    { 
		if (ktsostrong(i)==1) printf("%lld ",i);
	    }
	}
	if (a>b) {
		for (i=b;i<=a;i++)
	    { 
		if (ktsostrong(i)==1) printf("%lld ",i);
	    }
	}
}
int ktsostrong(int n)
{
	int a,b,i,sum=0;
	b=n;
	while (n>0)
	{	
		int tich=1;
		a=n%10;
		for(i=1;i<=a;i++)
		{
			tich=tich*i;
		}
		sum=sum+tich;
		n=n/10;
	}
	if (sum==b) return 1;
	else return 0;
}
