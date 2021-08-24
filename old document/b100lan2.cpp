#include<bits/stdc++.h>
using namespace std;
long long n,x;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>n>>x;
		vector<long long> a(100000);
		vector<long long> h(100000);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			h[i]=abs(x-a[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-1;j++)
			{
				if(h[j]>h[j+1])
				{
					swap(a[j],a[j+1]);
					swap(h[j],h[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

