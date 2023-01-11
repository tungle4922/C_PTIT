#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	for (int k=1;k<=t;k++)
	{
		char s1[201],s2[21],s3[201];
		gets(s1);
		gets(s2);
		printf("Test %d: ",k);
		strcpy(s3,s1); 		//luu s1 vao s3
		for (int i=0;i<strlen(s3);i++) if(s3[i]>='A' && s3[i]<='Z') s3[i]=s3[i]+32;  // viet thuong s3
		for (int i=0;i<strlen(s2);i++) if(s2[i]>='A' && s2[i]<='Z') s2[i]=s2[i]+32;	// viet thuong s2
		char *m[300];
		int j=0;
		char *token=strtok(s3," ");
		while(token!=NULL)
		{
			m[j++]=token;
			token=strtok(NULL," ");
		}   // cat xau s3
		char *n[300];
		int f=0;
		char *token1=strtok(s1," ");
		while(token1!=NULL)
		{
			n[f++]=token1;
			token1=strtok(NULL," ");
		} //cat xau s1 va luu vao mang
		int arr[300],h=0,dem=0;
		for(int i=0;i<j;i++) 
			if(strcmp(m[i],s2)==0) 
			{
				arr[h++]=i;
				dem++;
			}  //luu vi tri bang nhau cua xau s2 va s3
		int dem1=0;
		for(int i=0;i<f;i++) 
		{
			int v=0;
			for(int c=0;c<h;c++) if (i==arr[c]) v++;
			if (v==0) 
			{
				dem1++;
				if (dem1==f-dem) printf("%s",n[i]);
				else printf("%s ",n[i]);
			}
		}  // in ra xau s1 bo qua vi tri bang nhau giua s2 va s3
		printf("\n");
	}
}
