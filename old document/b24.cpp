#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>k>>n;
		long long a[1005];
		for(int i=0;i<n*k;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n*k);
		for(int i=0;i<n*k;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}

