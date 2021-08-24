#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	long long a[1000];
	a[0]=0;a[1]=1;
	long long i=2;
	map<long long,long long>c;
	c[0]=1;c[1]=1;
	while(a[i-1]+a[i-2]<=1000)
	{
		a[i]=a[i-1]+a[i-2];
		c[a[i]]=1;
		i++;
	}
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long A[n];
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		for(int i=0;i<n;i++)
		{
			if(c[A[i]]==1)cout<<A[i]<<" ";
		}
		cout<<endl;
	}
}

