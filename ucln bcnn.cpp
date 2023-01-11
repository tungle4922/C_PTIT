#include <stdio.h>
#include <math.h>
int ucln(int a,int b)
{
	if (b==0) return a;           
	return ucln(b,a%b); 
}
int bcnn(int a,int b)
{
	if (a == 0 || b == 0) return a + b;
	while(a!=b)
	{
		if (a>b) a=a-b;
		else b=b-a;
	}
	return a;
}
int main() {
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n%lld",ucln(a,b),a*b/bcnn(a,b));
}
