#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	long long n,a;
	scanf("%lld",&n);
	int deml=0;
	int demc=0;
	while (n>0)
	{
		a=n%10;
		if (a%2==1)
		{
			deml++;
		}
		else demc++;
	 	n=n/10;
	}
	printf("%d %d",deml,demc);
	return 0;
}
