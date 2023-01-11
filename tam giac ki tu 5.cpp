#include <stdio.h>
int main() {
	int h;
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		char a='A'+h-2-i;
		for (int j=0;j<h;j++)
		{
			if (j<=h-1-i) printf("%c",a++);
		}
		printf("\n");
	}
}
