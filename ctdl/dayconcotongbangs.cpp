#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,s;
		cin>>n>>s;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		map<int,int>c;
		c[0]=1;
		for(int i=0;i<n;i++)
		{
			for(int t=s;t>=a[i];t--)
			{
				if(c[t]==0&&c[t-a[i]]==1)
				{
					c[t]=1;
				}
			}
		}
//		cout<<c[s]<<endl;
		if(c[s]==1)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

