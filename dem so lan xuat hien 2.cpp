#include <stdio.h>
#include <math.h>
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
int snt(int a)
{
	if (a<=1) return 0;
	for (int i=2;i<=sqrt(a);i++)
		if (a%i==0) return 0;
	return 1;
}
int main() {
	int a;
	scanf("%d",&a);
	for (int j=1;j<=a;j++)
	{
		int b[100],d=0;
		scanf("%d",&n);
		for (int i=0;i<n;i++) scanf("%d",&m[i]);
		printf("Test %d:\n",j);
		for(int i=0;i<n;i++) {
  			if(ktm(m[i],b,d) && snt(m[i])) 
   			b[d++]=m[i];
 		}
		for (int i=0;i<d-1;i++){
			for (int e=i+1;e<d;e++){
				if (b[i]>b[e]) {
					int k=b[i];
					b[i]=b[e];
					b[e]=k;
				}
			}
		}
		for (int i=0;i<d;i++) printf("%d xuat hien %d lan\n",b[i],dem(b[i]));
		printf("\n");
	}
}
