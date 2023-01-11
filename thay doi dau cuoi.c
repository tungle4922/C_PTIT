#include <stdio.h>
int main() {
	int i=0;
	int n,j;
	int a[10];
	scanf("%d",&n);
 	while(n>0) 
	 {
  		a[i]=n%10;
  		n=n/10;
  		i++;
 	 }
 	if(a[0]!=0)
 	printf("%d",a[0]);
 	for(j=i-2;j>=1;j--)
 	printf("%d",a[j]);
 	printf("%d",a[i-1]);
}

