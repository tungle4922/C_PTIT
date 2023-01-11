#include<stdio.h>
#include<string.h>
char s[1000];
void daonguoc(char s[]){
	char s1[500];
	int j=0, n=strlen(s);
	for(int i=n-1;i>=0;i--) s1[j++]=s[i];
	s1[n]=NULL;
	strcpy(s,s1);
}
void cong(char a[],char b[]) {
	int n=strlen(a),m=strlen(b);
	daonguoc(a); daonguoc(b);
	strcat(a,"0");
	for(int i=0;i<=n-m;i++) strcat(b,"0");
	int nho=0; char tong[1000];
	for(int i=0;i<=n;i++)
	{
		int t=(a[i]-'0')+(b[i]-'0')+nho;
		nho=t/10; t=t%10;
		tong[i]='0'+t;
	}
	if(tong[n]=='0') tong[n]='\0';
	else tong[n+1]='\0';
	daonguoc(tong);
	strcpy(s,tong);
}
int main() {
	int t;
	scanf("%d\n",&t);
	char a[500],b[500];
	while(t--)
	{
		gets(a);
		gets(b);
		if(strlen(a)>strlen(b)) cong(a,b);
		else cong(b,a);
		printf("%s\n",s);
	}
}
