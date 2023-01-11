#include <stdio.h>
#include <stdlib.h>
int fib(int n);
void xuatdayfib(int n);
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	xuatdayfib(n);
	return 0;
}
int fib(int n)
{   
	if (n==1) 
	{
		return 0;
	}
	if (n==2) 
	{
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
void xuatdayfib(int n)
{	
	int i=1;
	for(i=1;i<=n;i++)
	{
		printf("%d ",fib(i));
	} 
}
