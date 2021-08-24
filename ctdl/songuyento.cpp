#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll s,p,n,dem;
int a[1000],b[1000][1000];
map<int,bool>c;
void kt(ll n1,ll tong,ll bd,int so[],int t)
{
	for(ll i=bd;i<t;i++)
	{
		if((tong+i)<=s)
		{
			tong+=so[i];
//			c[i]=1;
			a[n1]=so[i];
			if(n1==n- 1 &&  tong==s)
			{
				for(int j=0;j<n;j++)b[dem][j]=a[j];
				dem++;
			}
			else 
			{
				if(n1<n-1&&tong+i<s)kt(n1+1,tong,i+1,so,t);
			}
//			c[i]=0;
			tong-=so[i];
//			a[dem].pop_back();
		}
		if((tong+i)>s)break;
//		else 
//		{
//			if(tong+2*(n-1-n1)>s)break;
//		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		map<ll,bool>snt;
		cin>>n>>p>>s;
		snt[1]=snt[0]=1;
	for(int i=2;i*i<=s;i++)
	{
		if(snt[i]==0)
		{
			for(int j=i*i;j<=s;j+=i)
			{
				snt[j]=1;
			}
		}
	}
	int t=0;
	int so[1000];
	for(int i=p+1;i<=s;i++)
	{
		if(snt[i]==0)
		{
			so[t++]=i;
		}
	}
		dem=0;
		kt(0,0,0,so,t);
//		cout<<dem<<"    ";
//		dem=(dem%2==0)?dem/2:dem/2+1;
		cout<<dem<<endl;
		for(int i=0;i<dem;i++)
		{
			for(int j=0;j<n;j++)cout<<b[i][j]<<" ";
			cout<<endl;
		}
//		if(dem%2!=0)
//		{
//			for(int i=0;i<n;i++)cout<<a[dem/2][i]<<" ";
//			cout<<endl;
//		}
	}
}

