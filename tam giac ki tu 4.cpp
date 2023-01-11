#include <stdio.h>
int main() {
	int h;
	char a='>';
	int n[30];
	for (int i=0;i<30;i++) 
	{
		a=a+2;
		n[i]=a;
	}
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<2*h-1;j++)
		{
			if(j<=i) printf("%c",n[j]);
			else if (j>i && j<=2*i) printf("%c",n[2*i-j]);
			else printf(" ");
		}
		printf("\n");
	}
}
