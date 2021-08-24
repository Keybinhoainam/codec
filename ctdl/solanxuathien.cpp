#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,x;
		cin>>n>>x;
		map<long long ,long long> b;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		if(b[x]==0)cout<<-1;
		else cout<<b[x];
		cout<<endl;
	}
}

