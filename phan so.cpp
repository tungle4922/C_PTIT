#include<stdio.h>
#include<math.h>
int ucln(int a,int b)
{
	if (b==0) return a;           
	return ucln(b,a%b); 
}
int bcnn(int a,int b)
{
	return a*b/ucln(a,b);
}
typedef struct phanso
{
	int tu,mau;
} ps;
ps rutgon(ps a)
{
	ps c;
	c.tu=a.tu/ucln(a.tu,a.mau);
	c.mau=a.mau/ucln(a.tu,a.mau);
	return c;
}
ps quydongpsa(ps a,ps b)
{
	ps c;
	c.tu=a.tu*bcnn(a.mau,b.mau)/a.mau;
	c.mau=bcnn(a.mau,b.mau);
	return c;
}
ps quydongpsb(ps a,ps b)
{
	ps c;
	c.tu=b.tu*bcnn(a.mau,b.mau)/b.mau;
	c.mau=bcnn(a.mau,b.mau);
	return c;
}
ps tongps(ps a,ps b)
{
	ps c;
	c.tu=a.tu*b.mau+b.tu*a.mau;
	c.mau=a.mau*b.mau;
	c=rutgon(c);
	return c;
}
ps chiaps(ps a,ps b)
{
	ps c;
	c.tu=a.tu*b.mau;
	c.mau=a.mau*b.tu;
	c=rutgon(c);
	return c;
}
void xuat(ps a)
{
	printf("%d/%d",a.tu,a.mau);
}
int main() {
	int t;
	scanf("%d",&t);
	for (int y=1;y<=t;y++)
	{
		ps a,b,c;
		scanf("%d%d%d%d",&a.tu,&a.mau,&b.tu,&b.mau);
		printf("Case #%d:\n",y);
		a=rutgon(a);    // rut gon a
		b=rutgon(b);    //rut gon b
		xuat(quydongpsa(a,b));    // quy dong ps a
		printf(" ");
		xuat(quydongpsb(a,b));    // quy dong ps b
		printf("\n");  
		xuat(tongps(a,b));      // tong hai ps a va b
		printf("\n");   
		xuat(chiaps(a,b));   //chia hai ps
		printf("\n");
	}	
}
