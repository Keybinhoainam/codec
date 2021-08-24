#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n>>x;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<n;j++)
			{
				if(abs(a[j]-x)<abs(a[j-1]-x))
				swap(a[j],a[j-1]);
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

