#include<iostream>
#include<vector>
using namespace std;
int nt(long long n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a(1000);
		for(int i=2;i*i<=n;i++)
		{
			if(nt(i)==1)cout<<i*i<<" ";
		}
		cout<<endl;
    }
}

