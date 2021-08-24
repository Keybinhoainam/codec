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
		map<long long ,long long>b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		int i;
		for(i=0;i<n;i++)
		{
			if(b[a[i]]>1)
			{
				cout<<a[i];
				break;
			}
		}
		if(i==n)cout<<"NO";
		cout<<endl;
	}
}

