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
		long long a[n];
		map<long long,long long> c;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			c[a[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(c[a[i]]%2!=0)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
	}
}

