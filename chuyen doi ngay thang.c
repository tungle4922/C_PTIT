#include <stdio.h>
int main() {
	int a;
	scanf("%d",&a);
	int b=a/365;
	int c=(a%365)/7;
	int d=a-b*365-c*7;
	printf("%d %d %d",b,c,d);
	return 0;
}
