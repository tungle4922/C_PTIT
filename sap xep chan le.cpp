#include <stdio.h>
int main() {
	int n,m[100];
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&m[i]);
	for (int i=0;i<n-1;i++) {
		for (int j=i+1;j<n;j++) {
			if (m[i]>m[j])
			{
				int t=m[i];
				m[i]=m[j];
				m[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(!(m[i]&1)) printf("%d ",m[i]);  //dung dieu kien %2==0 bi sai
	}
	for(int i=0;i<n;i++){
		if(m[i]&1) printf("%d ",m[i]);   //dung dieu kien %2==1 bi sai
	}
}
