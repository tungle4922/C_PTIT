#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b;
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		int sum=0;
		int i;
		for(i=a;i<=b;i++)
		{	
			sum=sum+i;
		}
		printf("%d",sum);
	}
	else
	{
		int sum=0;
		int i;
		for(i=b;i<=a;i++)
		{	
			sum=sum+i;
		}
		printf("%d",sum);	
	}
	return 0;
}
