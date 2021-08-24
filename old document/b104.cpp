#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],b[20]={};
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			while(a[i]>0)
			{
				b[a[i]%10]=1;
				a[i]/=10;
			}
		}
		for(int i=0;i<10;i++)
		{
			if(b[i]==1)cout<<i<<" ";
		}
		cout<<endl;
	}
}

