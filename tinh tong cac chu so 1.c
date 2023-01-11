#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	unsigned int n;
	int tong=0;
	int a;
	scanf("%d",&n);
	while (n>0)
	{
		a=n%10;
		tong=tong+a;
		n=n/10;
	}
	printf("%d",tong);
	return 0;
}
