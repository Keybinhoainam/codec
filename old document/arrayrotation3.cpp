#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x,sum=0;
		cin>>n;
		vector<long long> a;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			sum+=x*i;
			a.push_back(x);
		}
//		cout<<a.at(0);
		for(int i=1;i<n;i++)
		{
			long long sum1=0;
			a.insert(a.begin(),a.at(n-1));
			for(int i=0;i<n;i++)
			{
				sum1+=a.at(i)*i;
			}
			if(sum<sum1)sum=sum1;
		}
		cout<<sum<<endl;
	}
}

