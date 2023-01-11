#include<stdio.h>
#include<string.h>
int DemSoTu(char s[]){
	int dem=0;
	char *token=strtok(s," ");
	while(token!=NULL){
		dem++;
		token=strtok(NULL," ");
	}
	return dem;
}
int main(){
	int t;
	scanf("%d\n",&t);
	for (int i=1;i<=t;i++)
	{
		char s[1000];
		gets(s);
		printf("%d\n",DemSoTu(s));
	}
}
