#include <stdio.h>
int main() {
	int n,m[100],i,mintn,minth;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	mintn=m[0];
	for (i=1;i<n;i++)
	{
		if (mintn>m[i]) mintn=m[i];
	}
	printf("%d ",mintn);
	if (m[0]!=mintn)
	{
		minth=m[0];
		for (i=1;i<n;i++)
		{
			if (minth>m[i] && m[i]>mintn) minth=m[i];
		}
		printf("%d",minth);
	}
	else
	{
		minth=m[1];
		for (i=1;i<n;i++)
		{
			if (minth>m[i] && m[i]>mintn) minth=m[i];
		}
		printf("%d",minth);
	}
}
