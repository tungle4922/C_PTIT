#include <stdio.h>
int main() {
	int h;
	scanf("%d",&h);
	char b='A';
	int a[30][30];
	for(int i=0;i<h;i++) {
		for (int j=0;j<h;j++) {
			if(j>=i) 
			{
				a[i][j]=b++;
			}	
		}
	}
	int A[30][30];
	for(int i=0;i<h;i++) {
		for (int j=0;j<h;j++) {
			A[j][i]=a[i][j];
		}
	}	
	for(int i=0;i<h;i++) {
		for (int j=0;j<h;j++) {
			if(j<=i) 
			{
				printf("%c ",A[i][j]);
			}
			else printf(" ");
		}
		printf("\n");
}
}
