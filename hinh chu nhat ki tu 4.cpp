#include <stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if (a==b) 
	{
		for (int i=0;i<a;i++)
		{
			char c='A'+b-1-i;
			char d='A'+b-1;
			for (int j=0;j<b;j++)
			{	
				if (j<=i) printf("%c",c++);
				else printf("%c",d);	
			}	
			printf("\n");
		}
	}
	else if (a<b)
	{
		for (int i=0;i<a;i++)
		{
			char c='A'+a-1-i;
			char d='A'+b-1;
			for (int j=0;j<b;j++)
			{	
				if (j<=b-a+i) printf("%c",c++);
				else printf("%c",d);	
			}
			printf("\n");
		}
	}
	else 
		for (int i=0;i<a;i++)
		{
			char c='A'+b-1-(i-(a-b));
			char d='A'+b-1;
			for (int j=0;j<b;j++)
			{	
				if (j<=i-(a-b) && i>=a-b) printf("%c",c++);
				else printf("%c",d);	
			}
			printf("\n");
		}
}
