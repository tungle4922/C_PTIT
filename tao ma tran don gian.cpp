#include<stdio.h>
int main() {
	int n,t=0,h;
	scanf("%d",&n);
	h=n;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<t;k++) printf("0 ");
		for(int j=0;j<h;j++) printf("%d ",j);
		t++;h--;
		printf("\n");
	}
}
