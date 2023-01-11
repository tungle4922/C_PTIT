#include <stdio.h>
int main() {
	int h;
	int n[20]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39};
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
