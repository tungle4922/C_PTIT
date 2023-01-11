#include<bits/stdc++.h>
using namespace std;
int chuanhoaxau(char s[]) {
	for(int i=0;i<strlen(s);i++) 
		if(s[i]>='A' && s[i]<='Z') s[i]+=32; // viet thuong
	int start,end;
	for(int i=0;i<strlen(s);i++)
		if(s[i]!=' ')
		{
			start=i;
			break;
		}
	for(int i=strlen(s)-1;i>=0;i--)
		if(s[i]!=' ')
		{
			end=i;
			break;
		}
	char a[105]; 
	int k=0;
	for(int i=start;i<=end;i++)
	{
		if(s[i]==' ' && s[i+1]==' ') continue;
		else
		{
			a[k]=char(s[i]);
			k++;
		}
	}
	a[k]=0; // xoa dau cach
	strcpy(s,a);
}
int main() {
	char s[105];
	gets(s);
	chuanhoaxau(s);
	int start;
	for(int i=strlen(s)-1;i>=0;i--) 
	{
		if(s[i]!=' ' && s[i-1]==' ')
		{
			start=i;
			break;
		}
	} // danh dau vi tri bat dau ten
	for(int i=start;i<strlen(s);i++) cout<<s[i];  // xuat ten
	char s3[105]; int d=1;
	s3[0]=s[0];
	for(int i=1;i<start-1;i++)
		if(s[i]==' ' && s[i+1]!=' ') s3[d++]=s[i+1];
	s3[d]=0; // luu chu cai dau vao xau s3
	cout<<s3;
	cout<<"@ptit.edu.vn";
}
