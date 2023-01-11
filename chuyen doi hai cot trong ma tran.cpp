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
			ARR[i][a-1]=arr[i][b-1];
			ARR[i][b-1]=arr[i][a-1];
		}
	}
	for(int i=0;i<m;i++) {
		for (int j=0;j<n;j++) {
			printf("%d ",ARR[i][j]);
		}
		printf("\n");
	}
}
