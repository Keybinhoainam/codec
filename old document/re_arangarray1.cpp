#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n;
		long long a[n];
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>=0&&x<n)a[x]=x;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

