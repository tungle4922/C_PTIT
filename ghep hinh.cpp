#include<stdio.h>
#include<math.h>
int kts(int a1,int a2,int b1,int b2,int c1,int c2)
{
	int s,a;
	s=a1*a2+b1*b2+c1*c2;
	a=sqrt(s);
	if (a*a!=s) return 0;
	else return 1;
}
int main()
{
	int a1,a2,b1,b2,c1,c2;
	scanf("%d%d%d%d%d%d",&a1,&a2,&b1,&b2,&c1,&c2);
	if (kts(a1,a2,b1,b2,c1,c2))
	{
		if(a1==b1 && a2+b2==c2 && c2==b1+c1) printf("YES");
			else if (a2==b1 && a1+b2==c2 && c2==b1+c1) printf("YES");
			else if (a1==b2 && a2+b1==c2 && c2==b2+c1) printf("YES");
			else if (a2==b2 && a1+b1==c2 && c2==a2+c1) printf("YES");
		else if (c1==b1 && c2+b2==a2 && a2==b1+a1) printf("YES");
			else if (c1==b2 && c2+b1==a2 && a2==b2+a1) printf("YES");
			else if (c2==b1 && c1+b2==a2 && a2==b1+a1) printf("YES");
			else if (c2==b2 && c1+b1==a2 && a2==b2+a1) printf("YES");
		else if (a1==c1 && c2+a2==b2 && b2==b1+a1) printf("YES");
			else if (a2==c1 && c2+a1==b2 && b2==b1+a2) printf("YES");
			else if (a1==c2 && c1+a2==b2 && b2==b1+a1) printf("YES");
			else if (a2==c2 && c1+a1==b2 && b2==b1+a2) printf("YES");
			
		else if (a2==c2 && a1+c1==b1 && b1==b2+c2) printf("YES");
			else if (a2==c1 && a1+c2==b1 && b1==b2+c1) printf("YES");
			else if (a1==c2 && a2+c1==b1 && b1==b2+c2) printf("YES");
			else if (a1==c1 && a2+c2==b1 && b1==b2+c1) printf("YES");
		else if (b2==c2 && b1+c1==a1 && a1==a2+b2) printf("YES");
			else if (b2==c1 && b1+c2==a1 && a1==a2+b2) printf("YES");
			else if (b1==c2 && b2+c1==a1 && a1==a2+b1) printf("YES");
			else if (b1==c1 && b2+c2==a1 && a1==a2+b1) printf("YES");
		else if (a2==b2 && a1+b1==c1 && c1==c2+b2) printf("YES");
			else if (a2==b1 && a1+b2==c1 && c1==c2+b1) printf("YES");
			else if (a1==b2 && a2+b1==c1 && c1==c2+b2) printf("YES");
			else if (a1==b1 && a2+b2==c1 && c1==c2+b1) printf("YES");
		
		else if (a1==b1 && b1==c1 && a2+b2+c2==a1) printf("YES");
		else if (a2==b2 && b2==c2 && a1+b1+c1==a2) printf("YES");
		else printf("NO");
	}
	else printf("NO");
}

