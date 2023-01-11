#include<stdio.h>
#include<string.h>
void tachtu(char s[]){
	char *token=strtok(s," ");
	while(token!=NULL){
		printf("%s\n",token);
		token=strtok(NULL," ");
	}
}
int main(){
	char s[1000];
		gets(s);
		tachtu(s);
}
