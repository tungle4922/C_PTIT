#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Xuat(char s[])
{
	if(s[0]!=' ') s[0]=toupper(s[0]);
	if(s[strlen(s)-1]!=' ') s[strlen(s)-1]=tolower(s[strlen(s)-1]);
	for(int i=1;i<strlen(s);i++)
	{
		if(s[i]!=' ' && s[i-1]==' ') s[i]=toupper(s[i]);
		if(s[i]!=' ' && s[i-1]!=' ') s[i]=tolower(s[i]);
	}
	char *token=strtok(s," ");
	while(token!=NULL)
	{
		printf("%s ",token);
		token=strtok(NULL," ");
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s[1000];
		gets(s);
		Xuat(s);
	}
}

