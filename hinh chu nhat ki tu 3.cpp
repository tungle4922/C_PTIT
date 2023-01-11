#include <stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=0;i<a;i++)
	{
		char c='@'+i;
		char d='@'+b-1;
		for (int j=0;j<b;j++)
		{	
			if (j<=b-1-i) printf("%c",c++);
			else printf("%c",d);	
		}
		printf("\n");
	}
}
