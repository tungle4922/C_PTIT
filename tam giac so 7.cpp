#include <stdio.h>
int main() {
	int h;
	scanf("%d",&h);
	int b=1;
	int a[20][20];
	for(int i=0;i<h;i++) {
		for (int j=0;j<h;j++) {
			if(j>=i) 
			{
				a[i][j]=b++;
			}	
		}
	}
	int A[20][20];
	for(int i=0;i<h;i++) {
		for (int j=0;j<h;j++) {
			A[j][i]=a[i][j];
		}
	}	
	for(int i=0;i<h;i++) {
		for (int j=0;j<h;j++) {
			if(j<=i) 
			{
				printf("%d ",A[i][j]);
			}
			else printf(" ");
		}
		printf("\n");
}
}

// bai nay dau tien in ra 1 tam giac roi dung dao nguoc mang
/*Vd: h=5
1 2  3  4  5 							1
  6  7  8  9							2 6
    10 11 12       dao nguoc mang=>     3 7 10
       13 14							4 8 11 13
          15							5 9 12 14 15     */
