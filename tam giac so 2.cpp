#include <stdio.h>
int main() {
	int h;
	int m[20]={2,4,6,8,10,12,14,16,18,20};
	int n[20]={1,3,5,7,9,11,13,15,17,19,21};
	scanf("%d",&h);
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<2*h-1;j++)
		{
			if(i%2==1 && j<=i) printf("%d",m[j]);
			else if (i%2==0 && j<=i) printf("%d",n[j]);
			else printf(" ");
		}
		printf("\n");
	}
}

// cach giai la tao 2 mang luu cac bien chan va le. neu i le va j<=i thi xuat ra mang chan, neu i chan va j<=i thi xuat ra mang le
