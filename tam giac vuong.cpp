#include<stdio.h>
#include<math.h>
int kiemtrascp(long long a)
{
	long long c;
	c=sqrt(a);
	if(c*c==a) return 1;
	return 0;
}
int main() {
	int y;
	scanf("%d",&y);
	while(y--)
	{
		int n;
		scanf("%d",&n);
		long long m[n];
		for(int i=0;i<n;i++) scanf("%lld",&m[i]);	
		for (int i=0;i<n-1;i++)
		{
			for (int j=i+1;j<n;j++)
			{
				if (m[i]>m[j])
				{
					long long t=m[i];
					m[i]=m[j];
					m[j]=t;
				}
			}
		} // sap xep mang tang dan
		int dem=0;
		for(int i=0;i<n-2;i++)
		{
			if(dem==1) break;
			for(int j=i+1;j<n-1;j++)
			{
				if(dem==1) break;
				long long b;
				b=m[i]*m[i]+m[j]*m[j];
				if(kiemtrascp(b))     // neu la so chinh phuong thi moi vao vong lap de kiem tra pytago
				{
					for(int f=j+1;f<n;f++)
					{
						if(b==m[f]*m[f]) 
						{
							dem++;
							break;
						}
					}
				}
			}
		} // tim cap pytago neu co 1 cap break(khi dem=1)
		if(dem==0) printf("NO\n");
		else printf("YES\n");
	}
}
