#include <stdio.h>
int main() {
	int h;
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		char a='A'+2*i-2;
		for (int j=0;j<h;j++)
		{
			if (j<=h-1-i) printf("%c",a=a+2);
		}
		printf("\n");
	}
}
