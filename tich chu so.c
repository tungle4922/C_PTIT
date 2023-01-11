#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	unsigned int n;
	scanf("%d",&n);
	int tich=1;
	int a;
	while (n>0)
	{
		a=n%10;
		tich=tich*a;
		n=n/10;
	}
	printf("%d",tich);
	return 0;
}
