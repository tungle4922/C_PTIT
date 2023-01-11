#include <stdio.h>
int main() {
	int h;
	int n[20]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40};
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<2*h-1;j++)
		{
			if(j<=i) printf("%d",n[j]);
			else if (j>i && j<=2*i) printf("%d",n[2*i-j]);
			else printf(" ");
		}
		printf("\n");
	}
}


