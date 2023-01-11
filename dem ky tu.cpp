#include <stdio.h>
#include <string.h>
int main() {
	char s[100];
	fgets(s,100,stdin);
	int dem=0,demtn=0;
	for (int i=0;i<=strlen(s);i++)
	{
		if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ) dem++;
		if (s[i]>='0' && s[i]<='9') demtn++;
	}
	printf("%d %d %d",dem,demtn,strlen(s)-dem-demtn-1);
}
