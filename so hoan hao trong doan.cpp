#include <stdio.h>
int main() {
	int a,b; 
	scanf("%d %d",&a,&b);
	int m[5] = {6,28,496,8128,33550336};
	for (int i=0;i<5;i++)
	{
	if (a<b){
		if (m[i]>=a && m[i]<=b) printf ("%d ",m[i]);
	}
	if (a>b){
		if (m[i]>=b && m[i]<=a) printf ("%d ",m[i]);
	}
    }
}
