#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,b,c,d,e,f;
		scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);   //A(a,b)  B(c,d)   C(e,f)
		double m,n,p;
		m=sqrt((c-a)*(c-a)+(d-b)*(d-b));   //AB
		n=sqrt((e-c)*(e-c)+(f-d)*(f-d));   //BC
		p=sqrt((e-a)*(e-a)+(f-b)*(f-b));   //AC
		//printf("%.3lf %.3lf %.3lf\n",m,n,p);
		if(m+n>p && m+p>n && n+p>m)
		{
			double ncv;
			ncv=(m+n+p)/2;
			printf("%.2lf\n",sqrt(ncv*(ncv-m)*(ncv-n)*(ncv-p)));
		}   // tinh dien tich tam giac
		else printf("INVALID\n");
	}
}
