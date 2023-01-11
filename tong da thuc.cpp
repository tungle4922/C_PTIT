#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct dathuc1{
	long long hs,sm;
} dt1;
dt1 ds1[10000];
typedef struct dathuc2{
	long long hs,sm;
} dt2;
dt2 ds2[10000];
typedef struct tongdathuc{
	long long hs,sm;
} tdt;
tdt dst[10000];
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s1[10000],s2[10000];
		gets(s1);
		gets(s2);
		char s3[10000],s4[10000];
		int h=0,u=0;
		for(int i=0;i<strlen(s1);i++)
		{
			if(s1[i]=='*' || s1[i]=='^' || s1[i]==' ') continue;
			if(s1[i]=='x' || s1[i]=='+') s1[i]=' ';
			s3[h++]=s1[i];
		}
		s3[h]=NULL; // tao xau s3 luu he so va so mu duoi dang chuoi cua da thuc s1
		for(int i=0;i<strlen(s2);i++)
		{
			if(s2[i]=='*' || s2[i]=='^' || s2[i]==' ') continue;
			if(s2[i]=='x' || s2[i]=='+') s2[i]=' ';
			s4[u++]=s2[i];
		}
		s4[u]=NULL; // tao xau s4 luu he so va so mu duoi dang chuoi cua da thuc s2
		int y=0,dem1=0;
		char *token=strtok(s3," ");
		while(token!=NULL)
		{
			dem1++;
			if(dem1%2!=0) ds1[y].hs=atoi(token);
			else ds1[y].sm=atoi(token);
			y++;
			token=strtok(NULL," ");
		} // luu he so va so mu cua da thuc s1 duoi danh int vao ds1
		int v=0,dem2=0;
		char *token1=strtok(s4," ");
		while(token1!=NULL)
		{
			dem2++;
			if(dem2%2!=0) ds2[v].hs=atoi(token1);
			else ds2[v].sm=atoi(token1);
			v++;
			token1=strtok(NULL," ");
		} // luu he so va so mu cua da thuc s2 duoi danh int vao ds2
		for(int i=0;i<y;i++)
		{
			if(i%2!=0)
			{
				for(int j=0;j<v;j++)
				{
					if(j%2!=0)
					{
						if(ds1[i].sm==ds2[j].sm) 
						{
							ds1[i-1].hs=ds1[i-1].hs+ds2[j-1].hs;
							ds2[j-1].hs=ds1[i-1].hs;
						}
					}
				}
			}
		} // cong he so cua hai da thuc
		int z=0;
		for(int i=0;i<y;i++)
		{
			if(i%2==0) 
			{
				dst[z].hs=ds1[i].hs;
				dst[z].sm=ds1[i+1].sm;
				z++;
			}
		} // luu he so va so mu sau khi cong he so cua da thuc 1 vao da thuc tong
		for(int i=0;i<v;i++)
		{
			if(i%2==0) 
			{
				dst[z].hs=ds2[i].hs;
				dst[z].sm=ds2[i+1].sm;
				z++;
			}
		} // luu he so va so mu sau khi cong he so cua da thuc 2 vao da thuc tong
		for(int i=0;i<z-1;i++) 
		{
			for(int j=i+1;j<z;j++)
			{
				if(dst[i].sm<dst[j].sm)
				{
					tdt g=dst[i];
					dst[i]=dst[j];
					dst[j]=g;
				}
			}
		} // sap xep lai so mu cua da thuc tong theo thu tu giam dan
		for(int i=0;i<z;i++) 
		{
			if(dst[i].sm==dst[i+1].sm && i!=z-1) continue;
			if(i!=z-1) printf("%lld*x^%lld + ",dst[i].hs,dst[i].sm);
			else printf("%lld*x^%lld",dst[i].hs,dst[i].sm);
		} // xuat da thuc tong neu trung lap so mu thi continue
		printf("\n");
	}
}
