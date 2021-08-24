#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n>>x;
		long long a[n],check=0;
		map<long long,int>b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]+x]=1;
		}
		for(int i=0;i<n;i++)
		{
			if(b[a[i]]==1)
			{
				cout<<1;
				check=1;
				break;
			}
		}
		if(check==0)cout<<-1;
		cout<<endl;
	}
}

