#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int snt(long long n)
{
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++) 
		if(n%i==0) return 0;
	return 1;
}    // kiem tra snt
int csnt(long long n)
{
	while(n>0)
	{
		if(snt(n%10)==0) return 0;
		n/=10;
	}
	return 1;
}  //kiem tra chu so nguyen to
int tongcsnt(long long n)
{
	int sum=0;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	if(snt(sum)) return 1;
	return 0;
}  //kiem tra tong cs nguyen to
void xuat(long long a,long long b)
{
	bool kt[b+1];
	for(long long i=2;i<=b;i++) kt[i]=true;
	for(long long i=2;i<=sqrt(b);i++)
	{
		if(kt[i]==true)
		{
			for(long long j=i*i;j<=b;j+=i) kt[j]=false;
		}
	}
	int dem=0;
	for(long long i=2;i<=b;i++)
	{
		if(kt[i]==true && i>=a)
		{
			if(tongcsnt(i) && csnt(i)) dem++;
		}
	}
	printf("%d\n",dem);
}// dung sang nguyen to de loc ra cac snt nho hon max va lon hon min t/m tongcsnt(i) va csnt(i)
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
		long long min,max;
		if(a<b) 
		{
			min=a;
			max=b;
		}
		else
		{
			min=b;
			max=a;
		}
		xuat(min,max);
	}
}
