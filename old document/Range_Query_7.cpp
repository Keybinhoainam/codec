#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		long long n,x,sum=0,sl;
		cin>>n>>x;
		long long a[n];
		sl=n+1;
		for(int i=0;i<n;i++)cin>>a[i];
		int end=0,st=0;
		while(end<n)
		{
			while(sum<=x&&end<n)sum+=a[end++];
			while(sum>x&&st<end)
			{
				if(end-st<sl)sl=end-st;
				sum-=a[st++];
			}
		}
		if(sl<=n)cout<<sl<<endl;
		else cout<<-1<<endl;
	}
}

