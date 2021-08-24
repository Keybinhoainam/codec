#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long m,n,a,b,dem=0;
		cin>>m>>n>>a>>b;
		for(int i=m;i<=n;i++)
		{
			if(i%a==0||i%b==0)dem++;
		}
		cout<<dem<<endl;
	}
}

