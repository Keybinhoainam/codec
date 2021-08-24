#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n>>x;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long *it,*it2;
		it=lower_bound(a,a+n,x);
		it2=upper_bound(a,a+n,x);
		int L=it-a;
		while(a[L]==x&&L>=0)L--;
		cout<<a[L];
	}
}

