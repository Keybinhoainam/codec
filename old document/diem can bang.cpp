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
		map<long long ,long long>b,c;
		for(int i=0;i<n;i++)
		{
			b[i]=(i==0)?a[i]:a[i]+b[i-1];
			c[n-i-1]=(i==0)?a[n-i-1]:a[n-i-1]+c[n-i];
		}
		int i;
		for(i=0;i<n;i++)
		{
			if(b[i]==c[i])
			{
				cout<<i+1;
				break;
			}
		}
		if(i==n)cout<<-1;
		cout<<endl;
	}
}

