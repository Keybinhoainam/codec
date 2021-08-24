#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod =pow(10,15)+7;
map<int,bool>c;

struct matran{
	ll f[10][10];
};

unordered_map<int,matran>cmt;
ll nhan(long long so1,long long so2)
{
	string s1=to_string((ll)so1),s2=to_string((ll)so2);
	string s3="";
	int l1=s1.length(),l2=s2.length();
	int a[l1+l2];
	for(int i=0;i<l1+l2;i++)a[i]=0;
	for(int i=l1-1;i>=0;i--)
	{
		for(int j=l2-1;j>=0;j--)
		{
			int t1=(int)(s1[i]-48),t2=(int)(s2[j]-48);
			a[i+j+1]+=t1*t2;
		}
	}
	for(int i=l1+l2-1;i>=1;i--)
	{
		a[i-1]+=(a[i]/10);
		a[i]=a[i]%10;
		char t=(char)(a[i]+48);
		s3=t+s3;
	}
	if(a[0]>0)
	{
		char t=a[0]+48;
		s3=t+s3;
	}
	ll kq=0;
	for(int i=0;i<s3.length();i++)
	{
		kq=((kq%mod * 10)%mod +(ll)(s3[i]-'0'))%mod;
	}
//	for(int i=s3.length()+1;i<=16;i++)s3="0"+s3;
//	ll kq=stoll(s3);
	return kq;
}
matran operator*(matran a,matran b)
{
	matran c;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			c.f[i][j]=0ll;
			for(int k=0;k<3;k++)
			{
				c.f[i][j]=(c.f[i][j]%mod+nhan(a.f[i][k]%mod,b.f[k][j]%mod))%mod;
			}
		}
	}
	return c;
}
matran power(matran a,int n)
{
	if(n==1)return a;
	matran tmp=(c[n/2])?cmt[n/2]:power(a,n/2);
	
	if(n%2==0)
	{
		c[n]=1;
		cmt[n]=tmp*tmp;
		return cmt[n];
		
	}
	else 
	{
		c[n]=1;
		cmt[n]=tmp*tmp*a;
		return cmt[n];
	}
}
long long tribo(int n)
{
	if(n<=3)return n;
	matran a;
	a.f[0][0]=1ll;a.f[0][1]=1ll;a.f[0][2]=1ll;
	a.f[1][0]=1ll;a.f[1][1]=0ll;a.f[1][2]=0ll;
	a.f[2][0]=0ll;a.f[2][1]=1ll;a.f[2][2]=0ll;
	if(c[n-3]==0)
	{
		matran tmp=power(a,n-3);
		ll kq= ((tmp.f[0][0]%mod *3)%mod + (tmp.f[0][1]%mod *2)%mod + (tmp.f[0][2]%mod)%mod)%mod;
		return kq;
	}
	else
	{
		ll kq= ((cmt[n-3].f[0][0]%mod *3)%mod + (cmt[n-3].f[0][1]%mod *2)%mod + (cmt[n-3].f[0][2]%mod)%mod)%mod;
		return kq;
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
//		n=pow(10,9);
		long long fb=tribo(n),fb2=tribo(n+2);
		cout<<((((fb2%mod+fb%mod)%mod-2)%mod)/2)%mod<<endl;
	}
}

