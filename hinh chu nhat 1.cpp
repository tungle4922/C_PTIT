#include <stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	for (int i=0;i<a;i++)
	{
		int c=i+1,d=i,e=b-1;
		for (int j=0;j<b;j++)
		{	
			if (j<=b-1-i || j==0) printf("%d",c++);
			else if (i<=b-1) printf("%d",d--);
			else printf("%d",e--);
		}
		printf("\n");
	}
}
