#include <stdio.h>
int n,a[1000];
int dem(int x);
int ktm(int t,int b[100],int m);
int main() {
	int demth=0;
	int b[100];
	int m=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++) {
  		if(ktm(a[i],b,m) && dem(a[i])>1) {
   			demth++;
   			b[m++]=a[i];
  		}
 	}
 	printf("%d\n",demth);
 	for(int i=0;i<m;i++)
  	printf("%d ",b[i]);
}
int dem(int x) {
 	int dem=0;
 	for(int i=0;i<n;i++)
  		if(a[i]==x) dem++;
 	return dem;
}
int ktm(int t,int b[100],int m) {  
 	for(int i=0;i<m;i++) {
  		if(t==b[i])
   		return 0;
 	}
 	return 1;
}
