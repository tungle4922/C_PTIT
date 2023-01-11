#include <stdio.h>
int main() {
	long long a,b;
	scanf("%lld %lld",&a,&b);
	if (a>b)
	{	
		int r;
		while (r>0)
		{
			r=a%b;
			r=b;
		}
		printf("%d",b);
	}
}
