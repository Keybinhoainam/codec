#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n;
		map<int,int>a;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(x>0)a[x]=1;
		}
		int i=1;
		while(a[i]==1)i++;
		cout<<i<<endl;
	}
}

