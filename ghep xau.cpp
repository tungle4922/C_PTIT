#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct{
    char a[1000];
}nx;
bool check(nx a,nx b)
{
    char s1[1000],s2[1000];
    strcpy(s1,a.a);
    strcat(s1,b.a);
    strcpy(s2,b.a);
    strcat(s2,a.a);
    if(strcmp(s1,s2)>=0) return true;
    else return false;
}  // so sanh a+b va b+a
int main(){
    int t;
    scanf("%d",&t);
    nx ds[100];
    while(t--){
        int m;
        scanf("%d\n",&m);
        for(int i=0;i<m;i++) scanf("%s",&ds[i].a);
        for(int i=0;i<m-1;i++)
		{
            for(int j=i+1;j<m;j++)
			{
                if(check(ds[i],ds[j]))
				{
                	nx u=ds[i]; 
					ds[i]=ds[j];   
					ds[j]=u;
                }
            }
        }
        for(int i=0;i<m;i++) printf("%s",ds[i].a);
        printf("\n");
    }
}
