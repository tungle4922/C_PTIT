#include<stdio.h>
#include<string.h>
int main() {
	char s1[600],s2[600];
	int t;
	scanf("%d\n",&t);
	while(t--)
	{
		char s3[600];
		gets(s1);
		gets(s2);
		int a=strlen(s1);
		int b=strlen(s2);
		if(a>b)          // xet truong hop b>a
		{
			int c=0;
			int d=0;
			for(int i=a-1;i>=0;i--)
			{
				if(b>0)   
				{
					b--;
					if((int)(s1[i]-'0')+(int)(s2[b]-'0')+d<10)
					{
						s3[c++]=s1[i]+s2[b]-48+d;
						d=0;
					}    // neu 2 chu so thang hang nhau co tong nho hon 10 thi nho 0
					else
					{
						s3[c++]=s1[i]+s2[b]-58+d;
						d=1;
					}   // neu 2 chu so thang hang nhau co tong lon hon 10 thi nho 1
				} // neu b>=0 thi tinh tong cs
				else 
				{
					if((int)(s1[i]-'0')+d>=10) 
					{
						s3[c++]='0';
						d=1;
					}   // neu s1[i] +1 =10 thi nho 1, VD cac truong hop dac biet nhu: 9999+999
					else 
					{
						s3[c++]=s1[i]+d;
						d=0;
					}   // neu s1[i] +1 <10 thi ko nho 1
					if(d==1 && c==a) s3[c++]='1';
				} // neu b<0 thi ko tinh tong cs
			}
			for(int i=c-1;i>=0;i--) printf("%c",s3[i]);
		}
		else if(b==a)   //xet th b=a
		{
			int c=0;
			int d=0;
			for(int i=a-1;i>=0;i--)
			{
				if(b>0)   
				{
					b--;
					if((int)(s1[i]-'0')+(int)(s2[b]-'0')+d<10)
					{
						s3[c++]=s1[i]+s2[b]-48+d;
						d=0;
					}    // neu 2 chu so thang hang nhau co tong nho hon 10 thi nho 0
					else
					{
						s3[c++]=s1[i]+s2[b]-58+d;
						d=1;
					}   // neu 2 chu so thang hang nhau co tong lon hon 10 thi nho 1
				} // neu b>=0 thi tinh tong cs
				if(d==1 && c==a) s3[c++]='1';
			}
			for(int i=c-1;i>=0;i--) printf("%c",s3[i]);
		}
		else    //xet th b>a
		{
			int c=0;
			int d=0;
			for(int i=b-1;i>=0;i--)
			{
				if(a>0)   
				{
					a--;
					if((int)(s1[a]-'0')+(int)(s2[i]-'0')+d<10)
					{
						s3[c++]=s1[a]+s2[i]-48+d;
						d=0;
					}    // neu 2 chu so thang hang nhau co tong nho hon 10 thi nho 0
					else
					{
						s3[c++]=s1[a]+s2[i]-58+d;
						d=1;
					}   // neu 2 chu so thang hang nhau co tong lon hon 10 thi nho 1
				} // neu b>=0 thi tinh tong cs
				else 
				{
					if((int)(s2[i]-'0')+d>=10) 
					{
						s3[c++]='0';
						d=1;
					}   // neu s2[i] +1 =10 thi nho 1, VD cac truong hop dac biet nhu: 999+9999
					else 
					{
						s3[c++]=s2[i]+d;
						d=0;
					}   // neu s2[i] +1 <10 thi ko nho 1
					if(d==1 && c==b) s3[c++]='1';
				} // neu b<0 thi ko tinh tong cs
			}
			for(int i=c-1;i>=0;i--) printf("%c",s3[i]);
		}
		printf("\n");
	}
}
