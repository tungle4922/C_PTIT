#include <stdio.h>
int main() {
	int h;
	scanf("%d",&h);
	char a='a';
	int m[10000];
	for (int i=0;i<100;i++)
	{
		m[i]=a;
		a++;
	}
	int k=0;
	for (int i=0;i<h;i++)
	{
		if (i%2==0) 
		{
			for (int j=0;j<=i;j++) 
			{
				printf("%c ",m[k++]);
			}
		}
		else 
		{
			for (int j=0;j<=i;j++)
			{
				k++;
			}
			for (int f=k-1;f>=k-i-1;f--)
				printf("%c ",m[f]);
		}
		printf("\n");
	}
}
