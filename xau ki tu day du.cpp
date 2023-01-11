#include<stdio.h>
#include<string.h>
int main() {
	char s[100];
	gets(s);
	int lmax,max=0;
	int l[100]; //mang luu do dai xau co the tao dc tu vi tri s[i]
	l[0]=1;
	for(int i=1;i<strlen(s);i++)
	{
		lmax=0;
		for(int j=0;j<i;j++)
		{
			if(s[i]>s[j])
				if(l[j]>lmax) lmax=l[j];
		}
		l[i]=lmax+1;
		if(l[i]>max) max=l[i];
	}// dung thuat toan quy hoach dong de tim do dai day con tang lon nhat
	//for(int i=1;i<strlen(s);i++) printf("%c ",s[i]);
	//printf("\n");
	//for(int i=1;i<strlen(s);i++) printf("%d ",l[i]);
	for(int i=1;i<strlen(s);i++)
	printf("%d",26-max);
}
