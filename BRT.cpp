#include<stdio.h>
#define swap(type,a,b) {type temp=a;a=b;b=temp;}
void quickSort(long long *a, int l, int r)
{
    int key=a[(l+r)/2];   //lay khoa la phan tu o giua mang
    int i=l,j=r;
 	while(i<=j)
    {
        while(a[i]<key) i++;     //tim phan tu ben trai >=key
        while(a[j]>key) j--;     //tim phan tu ben trai <=key  
        if(i<=j)
        {
            swap(long long,a[i],a[j]);  // doi cho 2 phan tu a[i], a[j]
            i++;
            j--;
        }
    }
    //bay gio ta co 1 mang : a[l]....a[j]..a[i]...a[r]
    if (l<j) quickSort(a,l,j);   //lam lai voi mang a[l]....a[j]
    if (i<r) quickSort(a,i,r);   //lam lai voi mang a[i]....a[r]
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		long long m[n];
		for(int i=0;i<n;i++) scanf("%lld",&m[i]);
		quickSort(m,0,n-1);   //sap xep mang tang dan
		long long hieu,min=2000000000,dem;
		for(int i=n-1;i>0;i--) 
		{
			hieu=m[i]-m[i-1];
			if(hieu<min) 
			{
				min=hieu;
				dem=0;
			}
			if(hieu==min) dem++;
		}   // tim min va so lan =min
		printf("%lld %lld\n",min,dem);
	}
}
