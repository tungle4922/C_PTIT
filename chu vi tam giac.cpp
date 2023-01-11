#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		float a,b,c,d,e,f;
		scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);   //A(a,b)  B(c,d)   C(e,f)
		float m,n,p;
		m=sqrt((c-a)*(c-a)+(d-b)*(d-b));   //AB
		n=sqrt((e-c)*(e-c)+(f-d)*(f-d));   //BC
		p=sqrt((e-a)*(e-a)+(f-b)*(f-b));   //AC
		//printf("%.3f %.3f %.3f\n",m,n,p);
		if(m==0 || n==0 || p==0) printf("INVALID\n");
		else if(m+n<=p || m+p<=n || n+p<=m) printf("INVALID\n");
		else
		{
			float cv;
			cv=m+n+p;
			printf("%.3f\n",cv);
		}
	}
}
