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
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long max1=0;
		for(int i=0;i<n;i++)
		{
			for(int j=n-1;j>i;j--)
			{
				if(a[j]>a[i]&&j-i>max1)max1=j-i;
				if(j-i<=max1)break;
			}
		}
		cout<<max1<<endl;
	}
}

