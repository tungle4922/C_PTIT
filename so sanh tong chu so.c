#include <stdio.h>
void sstongcs(int a, int b);
int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	sstongcs(a,b);
}
void sstongcs(int a, int b)
{	
	int c,d;
	c=a;
	d=b;
	int sumtn=0;
	int sumth=0;
	while (a>0)
	{
		sumtn=sumtn+a%10;
		a=a/10;
	}
	while (b>0)
	{
		sumth=sumth+b%10;
		b=b/10;
	}
	if (sumtn>sumth) printf("%d %d",d,c);
	else if (sumtn<sumth) printf("%d %d",c,d);
	else printf("%d %d",c,d);
}
