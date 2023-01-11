#include <stdio.h>
int main() {
	int n,m;
	int a[10][10];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	int A[10][10];
	for(int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			A[j][i]=a[i][j];
		}
	}	
	for(int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			printf("%d ",A[i][j]);
		}
		printf("\n");
	}
}

