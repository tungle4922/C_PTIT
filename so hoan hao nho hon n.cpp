#include <stdio.h>
int main() {
	int a; 
	scanf("%d",&a);
	int m[5] = {6,28,496,8128,33550336};
	for (int i=0;i<5;i++)
	{
	if (m[i]<=a) printf ("%d ",m[i]);
    }
}
