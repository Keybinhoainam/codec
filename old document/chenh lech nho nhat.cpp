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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		long long min1=a[1]-a[0];
		for(int i=2;i<n;i++)
		{
			if(min1>a[i]-a[i-1])min1=a[i]-a[i-1];
		}
		cout<<min1<<endl;
	}
}

