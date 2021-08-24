#include<bits/stdc++.h>
using namespace std;
vector<long long>a;
vector<long long>x;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		a.resize(10007);
		x.resize(10007);
		cin>>n;
		cout<<1<<" ";
		for(int i=2;i*i<=n;i++)
		{
			if(x[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)
				{
					if(x[j]==0)a[j]=i;
					x[j]=1;
				}
			}
		}
		for(int i=2;i<=n;i++)
		{
			if(x[i]==0)cout<<i<<" ";
			else cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

