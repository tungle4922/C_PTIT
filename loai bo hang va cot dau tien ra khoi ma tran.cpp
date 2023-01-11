#include <stdio.h>
int main() {
	int n,m,b;
	scanf("%d",&b);
	for (int c=1;c<=b;c++)
	{
		int a[10][10];
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++) {
			for (int j=0;j<m;j++) {
				scanf("%d",&a[i][j]);
			}
		printf("\n");
		}
		printf("Test %d:\n",c);
		for(int i=1;i<n;i++) {
			for (int j=1;j<m;j++) {
				printf("%d ",a[i][j]);
			}
		printf("\n");
		}
		printf("\n");
	}
}

