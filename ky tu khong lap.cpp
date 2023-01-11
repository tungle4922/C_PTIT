#include<bits/stdc++.h>
using namespace std;
int demsl(char m[],char a)
{
	int dem=0;
	for(int i=0;i<strlen(m);i++) 
		if(a==m[i]) dem++;
	if(dem>1) return 0;
	return 1;
}
int main() {
	int t;
	cin>>t;
	while (t--) {
		char m[200000];
		cin>>m;
		for(int i=0;i<strlen(m);i++)
			if(demsl(m,m[i])) cout<<m[i];
		cout<<"\n";
	}
}
