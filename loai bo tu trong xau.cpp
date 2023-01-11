#include<stdio.h>
#include<string.h>
void tachtu(char s1[],char s2[]){
	int a=strlen(s2);
	char s3[102];
	int t=0;
	for (int i=0;i<a+1;i++)
	{
		s3[i]=s2[t++];
	}
	s3[a]=' ';
	char *token=strtok(s1,s3);
	while(token!=NULL){
		printf("%s ",token);
		token=strtok(NULL,s3);
	}
}
int main(){
	char s1[101],s2[101];
	gets(s1);
	gets(s2);
	tachtu(s1,s2);
}
