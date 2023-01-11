#include <stdio.h>
int main() {
	long long a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	if (a<b && a<c) printf("%lld",a);
	else if (b<a && b<c) printf("%lld",b);
	else if (c<a && c<b) printf("%lld",c);
	else if (a<b && b==c) printf("%lld",a);
	else if (b<a && a==c) printf("%lld",b);
	else if (c<a && b==a) printf("%lld",c);
	else if (b==a && a<c) printf("%lld",a);
	else if (c==a && a<b) printf("%lld",a);
	else if (b==c && c<a) printf("%lld",c);
	else printf("%lld",a);
}
