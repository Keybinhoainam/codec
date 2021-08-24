#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n];
		cin>>a[0];
		long long min1=a[0];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			if(min1>a[i])min1=a[i];
		}
		cout<<min1<<endl;
	}
}

