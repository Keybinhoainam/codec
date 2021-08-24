#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,x,k;
		cin>>n;
		vector<long long> a(n);
		long long b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k>>x;
		vector<long long>::iterator it,it2;
		it = lower_bound(a.begin(), a.end(), x);
		it2=upper_bound(a.begin(), a.end(), x);
		long long L=it-a.begin();
		long long R=it2-a.begin();
		while(a[L]==x&&L>=0)L--;
		int t=0;
		while(k>0)
		{
			if(L>=0)
			{
				b[t++]=a[L];
				L--;
				k--;
			}
			if(R<=n-1)
			{
				b[t++]=a[R];
				R++;
				k--;
			}
		}
		sort(b,b+t);
		for(int i=0;i<t;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}

