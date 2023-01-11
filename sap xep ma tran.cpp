#include<stdio.h>
#include<math.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int main() {
	int t;
	scanf("%d",&t);
	for(int u=1;u<=t;u++)
	{
		int row,col;
		scanf("%d%d",&row,&col);
		int m[row][col];
		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++) scanf("%d",&m[i][j]);
		printf("Test %d:\n",u);
		for(int i1=0;i1<row;i1++)
		{
			for(int j1=0;j1<col;j1++)
			{
				for(int i2=i1;i2<row;i2++)
				{
					for(int j2=j1;j2<col;j2++)
					{
						if(m[i1][j1]>m[i2][j2])    // chi so sanh va doi cho m[i1][j1] voi cac phan tu m[i2][j2] (i2>=i1;j2>=j1)
							swap(&m[i1][j1],&m[i2][j2]);
					}
				}
			}
		}
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++) printf("%d ",m[i][j]);
			printf("\n");
		}
	}
}
