#include<bits/stdc++.h>
using namespace std;
long long tongchuson(long long n)
{
	long long tong=0;
	while(n>0)
	{
		tong+=n%10;
		n/=10;
	}
	return tong;
}
long long tongchusouoc(long long n)
{
	long long i=2,tong=0,dem;
	while(n>1)
	{
		if(n%i==0)
		{
			dem=0;
			while(n%i==0)
			{
				n/=i;
				dem++;
			}
			tong=tong+tongchuson(i)*dem;
		}
		i++;
	}
	return tong;
}
int main()
{
	int T;cin>>T;
	map<long long,int> a;
	a[0]=1;
	a[1]=1;
	for(int i=2;i*i<=100000;i++)
	{
		if(a[i]==0)
		{
			for(int j=i*i;j<100000;j+=i)a[j]=1;
		}
	}
	while(T--)
	{
		long long n;
		cin>>n;
		long long t1=tongchuson(n),t2=tongchusouoc(n);
		if(a[n]==1&&t1==t2)cout<<"YES";
		else cout<<"NO";
//		cout<<t1<<" "<<t2;
		cout<<endl;
	}
}

