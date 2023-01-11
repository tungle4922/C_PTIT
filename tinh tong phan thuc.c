#include <stdio.h>
int main() {
	long long n,i ;
	scanf("%lld",&n);
	double sum=0;
	for(i=1;i<=n;i++ ){
		sum +=1.0/i;
	}
	printf("%.4lf",sum);
}
