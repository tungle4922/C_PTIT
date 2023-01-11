#include<stdio.h>
#include<ctype.h>
#include<string.h>
int tim( char s[50], char ds [100][50] ,int n) 
{
	for (int i=0; i<n; i++) 
		if (strcmp(s, ds[i]) == 0) return i;
	return -1; 
}
int main()
{
	char ds[100][50] , s[50];
	int t, n=0;
	while (scanf("%s", &s) != -1) {
		t=tim(s, ds, n) ;
		if (t==-1) {
			strcpy(ds[n], s);
			n++;
			printf("%s ", s);
			}
		}
		}
