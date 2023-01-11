#include <stdio.h>
int main() {
	int h;
	int n[20]={1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39};
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<2*h-1;j++)
		{
			if(j<=i) printf("%d",n[j]);
			else if (j>i && j<=2*i) printf("%d",n[2*i-j]);
			else printf(" ");
		}
		printf("\n");
	}
}

// de loi: de cho h<=9 nhung phai tao mang co nhieu gia tri hon
// cach lam la neu j<=i thi xuat n[j],neu j>i va j<=2*i thi xuat n[2*i-j]
