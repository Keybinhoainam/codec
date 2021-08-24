#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		long long kq=0;
		map<long long,long long>c;
//		c[0]=0;
		for(int i=1;i<=n;i++)
		{
			c[i]=max(c[i-2],c[i-3])+a[i];
			kq=max(kq,c[i]);
		}
		cout<<kq<<endl;
	}
}

