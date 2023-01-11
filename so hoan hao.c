#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int sum=0;
	int i=1;
	while (i<n)
	{
		if (n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if (sum==n)
	printf("1");
	else printf("0");
	return 0;
}
