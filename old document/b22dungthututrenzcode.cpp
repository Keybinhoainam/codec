#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;
vector<long long> a(1000000);
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		for (int i = 0; i < n; i++) {
			a[i] = -1;
		}
		for(long long i=0;i<n;i++)
		{
  			long long t;
			cin>>t;
			if(t<n)a[t]=t;
		}
		for(long long i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

