#include <stdio.h>
int main() {
	int h;
	int n[20]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40};
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<2*h-1;j++)
		{
			if(j>=(h-1-i) && j<=h-1) printf("%d",n[j-(h-1-i)]);
			else if (j>h-1 && j<=h+i-1) printf("%d",n[i-j+h-1]);
			else if (j<h-1-i) printf("~");
			else printf(" ");
		}
		printf("\n");
	}
}
