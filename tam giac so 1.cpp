#include <stdio.h>
int main() {
	int h;
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<2*h-1;j++)
		{
			if (j<=2*i) printf("%d",j+1);
			else printf(" ");
		}
		printf("\n");
	}
}


// Quy luat la neu i nho hon 2*i thi se xuat ra man hinh j+1
