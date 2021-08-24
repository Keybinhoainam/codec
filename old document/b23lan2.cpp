#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x,dem=0;
		cin>>n;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			if(x!=0)
			{
				cout<<x<<" ";
				dem++;
			}
		}
		for(int i=0;i<n-dem;i++)
		{
			cout<<0<<" ";
		}
		cout<<endl;
	}
}

