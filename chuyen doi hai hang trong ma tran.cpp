#include <stdio.h>
int main() {
	int n,m,a,b;
	int arr[100][100];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	scanf("%d%d",&a,&b);
	int ARR[100][100];
	for(int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			ARR[i][j]=arr[i][j];
			ARR[a-1][j]=arr[b-1][j];
			ARR[b-1][j]=arr[a-1][j];
		}
	}
	for(int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			printf("%d ",ARR[i][j]);
		}
		printf("\n");
	}
}
