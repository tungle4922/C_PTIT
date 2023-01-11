#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	unsigned int n;
	int dem=0;
	scanf("%d",&n);
	while (n>10)
	{
		n=n/10;
		dem++;
	}
	printf("%d",dem+1);
	return 0;
}
