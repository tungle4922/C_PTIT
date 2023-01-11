#include<stdio.h>
int main() {
	long long n;
	scanf("%lld",&n);
	long long m[n],sum=0;
	for(long long i=0;i<n;i++) 
	{
		scanf("%lld",&m[i]);
		sum+=m[i];
	}
	double trungbinh;
	trungbinh=(double)sum/n;
	printf("%.3lf",trungbinh);
}
