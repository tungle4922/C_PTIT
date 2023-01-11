#include <stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=0;i<a;i++)
	{
		char c='A'+i;
		char d='A'+i-1;
		char e='A'+b-1;
		for (int j=0;j<b;j++)
		{	
			if (j<=b-1-i || j==0 && i<=b-1) printf("%c",c++);
			else if (i<=b-1) printf("%c",d--);
			else printf("%c",e--);
		}
		printf("\n");
	}
}
