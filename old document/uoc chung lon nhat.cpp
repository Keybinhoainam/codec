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
		long long a[n],b[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<a[0]<<" ";
		b[0]=a[0];
		for(int i=1;i<n;i++)
		{
			b[i]=(a[i-1]*a[i])/__gcd(a[i-1],a[i]);
			cout<<b[i]<<" ";
		}
		cout<<a[n-1]<<endl;
	}
}

