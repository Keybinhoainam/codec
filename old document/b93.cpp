#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,m,j;
		cin>>n;
		long long a[n+5],kq[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			kq[i]=1;
		}
		m=1;
		for(int i=n-2;i>=0;i--)
		{
			for(int j=i+1;j<n;j++)
			{
				if(kq[i]<1+kq[j]&&a[i]<a[j])kq[i]=1+kq[j];
			}
			if(m<kq[i])m=kq[i];
		}
		cout<<m<<endl;
	}
}
