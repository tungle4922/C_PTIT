#include <stdio.h>
int main() {
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for (i=0;i<a;i++)
	{
		for (j=0;j<a+b-1;j++)
		{
			if ((i==0 && j<b) || (i==a-1 && j>=i) || (i==j) || (j-i==b-1))
			printf("*");
			else if (i<j && j<i+b-1) printf(".");
			else if ((j==0 && i>0) || (i==a-1 && j<a-1) || (i-j==1 && j<a-2) || (j>0 && j<i-1))  printf("~");
			else printf(" ");
		}
		printf("\n");
	}
}
