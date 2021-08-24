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
		long long a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)cin>>b[i];
		int grundy[n];
		for(int i=0;i<n;i++)
		{
			grundy[i]=a[i]%(b[i]+1);
		}
		int t=grundy[0];
		for(int i=1;i<n;i++)t=t^grundy[i];
		if(t==0)cout<<"Second";
		else cout<<"First";
		cout<<endl;
	}
}

