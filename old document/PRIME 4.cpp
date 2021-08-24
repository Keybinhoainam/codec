#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		map<long long,int> a,x;
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)
				{
					if(a[j]==0)x[j]=i;
					a[j]=1;
				}
			}
		}
		cout<<"1 ";
		for(int i=2;i<=n;i++)
		{
			if(a[i]==0)cout<<i<<" ";
			else cout<<x[i]<<" ";
		}
		cout<<endl;
	}
}

