#include <stdio.h>
int n,m[100];
int dem(int a)
{
	int dem=0;
	for (int i=0;i<n;i++)
	 	if (m[i]==a) dem++;
	return dem;
}
int ktm(int t,int b[100],int d) {  
 	for(int i=0;i<d;i++) {
  		if(t==b[i])
   		return 0;
 	}
 	return 1;
}
int main() {
	int b[100],d=0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for(int i=0;i<n;i++) {
  		if(ktm(m[i],b,d) && dem(m[i])>=1) {
   			b[d++]=m[i];
  		}
 	}
	for (int i=0;i<d;i++)
	{
		printf("%d %d\n",b[i],dem(b[i]));
	}
}
