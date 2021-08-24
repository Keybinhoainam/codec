#include<bits/stdc++.h>
using namespace std;
int kt()
{
	long long n;
		cin>>n;
		long long a[n];
//		map<long long ,long long> b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]=a[i]*a[i];
		}
		sort(a,a+n);
		int L,R,check=0;
		for(int i=n-1;i>=0;i--)
		{
			L=0;R=i-1;
			while(L<R)
			{
				if(a[L]+a[R]==a[i])
				{
					return 1;
				}
				if(a[L]+a[R]>a[i])
				{
					R--;
				}
				else L++;
			}
		}
		return 0;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		if(kt()==1)cout<<"YES";
		else cout<<"NO";
		cout<<endl;
		
	}
}

