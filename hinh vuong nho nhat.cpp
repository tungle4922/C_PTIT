#include<stdio.h>
int main() {
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	scanf("%d%d%d%d",&x3,&y3,&x4,&y4);
	int a,b;
	if(x1>x4) a=(x2-x1)+(x4-x3)+(x1-x4);
	else a=(x2-x1)+(x4-x3)+(x4-x1);
	if(y3>y2) b=(y2-y1)+(y4-y3)+(y3-y2);
	else b=(y2-y1)+(y4-y3)+(y2-y3);
	int s;
	if(a>b) s=a*a;
	else s=b*b;
	printf("%d",s);
}

