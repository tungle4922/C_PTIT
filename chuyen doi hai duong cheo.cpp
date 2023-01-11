#include <stdio.h>
int main() {
	int n;
	int arr[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	int ARR[100][100];
	for(int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			ARR[i][j]=arr[i][j];
			ARR[i][i]=arr[i][n-1-i];
			ARR[i][n-1-i]=arr[i][i];
		}
	}
	for(int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			printf("%d ",ARR[i][j]);
		}
		printf("\n");
	}
}
