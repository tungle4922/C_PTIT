#include<stdio.h>
#include<string.h>
int main() {
	char s1[1000],s2[1000];
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s3[1000];
		gets(s1);
		gets(s2);
		int a=strlen(s1);
		int b=strlen(s2);
		if(a>b)    // xet truong hop a>b
		{
			int c=0;
			int d=0;
			for(int i=a-1;i>=0;i--)
			{
				if(b>0)   
				{
					b--;
					if((int)(s1[i]-'0')-(int)(s2[b]-'0')-d>=0)
					{
						s3[c++]=s1[i]-s2[b]+48-d;
						d=0;
					}    // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 0
					else
					{
						s3[c++]=s1[i]-s2[b]+58-d;
						d=1;
					}   // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 1
				} // neu b>=0 thi tinh hieu cs
				else 
				{
					if((int)(s1[i]-'0')-d<0) 
					{
						s3[c++]='9';
						d=1;
					}   // neu s1[i] -1 =9 thi nho 1, VD cac truong hop dac biet nhu: 1000-99
					else 
					{
						s3[c++]=s1[i]-d;
						d=0;
					}   // neu s1[i] -1 >=0 thi ko nho 1
				} // neu b<0 thi ko tinh hieu cs
			}
			int v;
			if (s3[c-1]=='0')
			{
				for(int i=c-1;i>=0;i--) 
				{
					if(s3[i]!='0') 
					{
						v=i;
						break;
					}
				}
				for(int i=v;i>=0;i--) printf("%c",s3[i]);	
			}
			else for(int i=c-1;i>=0;i--) printf("%c",s3[i]);   // loai bo so 0 o dau neu co
		}
		else if(a==b)   // xet truong hop a=b
		{
			if(strcmp(s1,s2)>0)  // xet truong hop s1>s2
			{
				int c=0;
				int d=0;
				for(int i=a-1;i>=0;i--)
				{
					if(b>0)   
					{
						b--;
						if((int)(s1[i]-'0')-(int)(s2[b]-'0')-d>=0)
						{
							s3[c++]=s1[i]-s2[b]+48-d;
							d=0;
						}    // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 0
						else
						{
							s3[c++]=s1[i]-s2[b]+58-d;
							d=1;
						}   // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 1
					} // neu b>=0 thi tinh hieu cs
				}
				int v;
				if (s3[c-1]=='0')
				{
					for(int i=c-1;i>=0;i--) 
					{
						if(s3[i]!='0') 
						{
							v=i;
							break;
						}
					}
					for(int i=v;i>=0;i--) printf("%c",s3[i]);	
				}
				else for(int i=c-1;i>=0;i--) printf("%c",s3[i]);   // loai bo so 0 o dau neu co
			}
			else if(strcmp(s1,s2)==0) printf("0");  // xet truong hop neu s1=s2 thi bang 0
			else // xet truong hop s2>s1
			{
				int c=0;
				int d=0;
				for(int i=b-1;i>=0;i--)
				{
					if(a>0)   
					{
						a--;
						if((int)(s2[i]-'0')-(int)(s1[a]-'0')-d>=0)
						{
							s3[c++]=s2[i]-s1[a]+48-d;
							d=0;
						}    // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 0
						else
						{
							s3[c++]=s2[i]-s1[a]+58-d;
							d=1;
						}   // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 1
					} // neu a>=0 thi tinh hieu cs
				}
				int v;
				if (s3[c-1]=='0')
				{
					for(int i=c-1;i>=0;i--) 
					{
						if(s3[i]!='0') 
						{
							v=i;
							break;
						}
					}
					for(int i=v;i>=0;i--) printf("%c",s3[i]);	
				}
				else for(int i=c-1;i>=0;i--) printf("%c",s3[i]);   // loai bo so 0 o dau neu co
			}
		}
		else    //xet truong hop b>a (s2>s1)
		{
			int c=0;
			int d=0;
			for(int i=b-1;i>=0;i--)
			{
				if(a>0)   
				{
					a--;
					if((int)(s2[i]-'0')-(int)(s1[a]-'0')-d>=0)
					{
						s3[c++]=s2[i]-s1[a]+48-d;
						d=0;
					}    // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 0
					else
					{
						s3[c++]=s2[i]-s1[a]+58-d;
						d=1;
					}   // neu 2 chu so thang hang nhau co hieu lon hon 0 thi nho 1
				} // neu a>=0 thi tinh hieu cs
				else 
				{
					if((int)(s2[i]-'0')-d<0) 
					{
						s3[c++]='9';
						d=1;
					}   // neu s2[i] -1 =9 thi nho 1, VD cac truong hop dac biet nhu: 1000-99
					else 
					{
						s3[c++]=s2[i]-d;
						d=0;
					}   // neu s2[i] -1 >=0 thi ko nho 1
				} // neu a<0 thi ko tinh hieu cs
			}
			int v;
			if (s3[c-1]=='0')
			{
				for(int i=c-1;i>=0;i--) 
				{
					if(s3[i]!='0') 
					{
						v=i;
						break;
					}
				}
				for(int i=v;i>=0;i--) printf("%c",s3[i]);	
			}
			else for(int i=c-1;i>=0;i--) printf("%c",s3[i]);   // loai bo so 0 o dau neu co
		}
		printf("\n");
	}
}
