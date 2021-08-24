#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e15 + 7;
struct matran {
	int x, y;
	ll f[5][5];
};
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
	c.x=a.x;c.y=b.y;
//	cout<<"ok\t"<<c.x<<"\t"<<c.y<<endl;
	for(int i=1;i<=c.x;i++)
	{
		for(int j=1;j<=c.y;j++)
		{
			c.f[i][j]=0ll;
			for(int k=1;k<=a.y;k++)
			{
				c.f[i][j]=(c.f[i][j] + nhan(a.f[i][k]%mod,b.f[k][j]%mod))%mod;
			}
		}
	}
	return c;
}
matran Power(matran a, int x) {
	if (x == 1) return a;
	matran ans = Power(a, x/2);
	if (x%2) return ans * ans * a;
	return ans * ans;
}
matran a,x;
int main()
{
	a.x = 4;
	a.y = 1;
	a.f[1][1] = (ll)6;
	a.f[2][1] = (ll)3;
	a.f[3][1] = (ll)2;
	a.f[4][1] = (ll)1;

	x.x = x.y = 4;
	x.f[1][1] = x.f[1][2] = x.f[1][3] = x.f[1][4] = 1ll;
	x.f[2][2] = x.f[2][3] = x.f[2][4] = 1ll;
	x.f[3][2] = x.f[4][3] = 1ll;
	int Te;
	cin>>Te;
	while(Te--)
	{
		int n;
		cin>>n;
//		n=pow(10,9);
		if (n <= 3) {
			cout<< n*(n+1)/2 << '\n'; 
			continue;
		}
		matran ans = Power(x, n-3) * a;
		cout << ans.f[1][1]<<"\n";
	}
}

