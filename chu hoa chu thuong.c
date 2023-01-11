#include <stdio.h>
int main() {
	long long b,i;
	char a;
	scanf("%lld",&b);
	for (i=1;i<=2*b;i++)
	{		
		scanf("%c",&a);
		if ((a>='A') && (a<='Z')) 
		{
			printf("%c\n",a+32);	
		}
		if ((a>='a') && (a<='z'))
		{
			printf("%c\n",a-32);	
		}
	}
}
