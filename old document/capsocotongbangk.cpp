#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long a[n];
		map<long long,long long>b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		long long tong=0;
		for(int i=0;i<n;i++)
		{
			if(k-a[i]!=a[i])tong+=b[k-a[i]];
			else tong+=(b[k-a[i]]-1);
		}
		cout<<tong/2<<endl;
	}
}

