#include <stdio.h>
int main() {
	int n,m[100],i,maxtn,maxth;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	maxtn=m[0];
	for (i=1;i<n;i++)
	{
		if (maxtn<m[i]) maxtn=m[i];
	}
	printf("%d ",maxtn);
	if (m[0]!=maxtn)
	{
		maxth=m[0];
		for (i=1;i<n;i++)
			{
				if (maxth<m[i] && m[i]<maxtn) maxth=m[i];
			}
		printf("%d",maxth);
    }
    else
    {
    	maxth=m[1];
		for (i=1;i<n;i++)
			{
				if (maxth<m[i] && m[i]<maxtn) maxth=m[i];
			}
		printf("%d",maxth);
	}	
}


