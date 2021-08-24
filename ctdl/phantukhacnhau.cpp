#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,x;
		cin>>n;
		map<long long,long long>a,b;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a[i]=x;
		}
		for(int i=0;i<n-1;i++)
		{
			cin>>x;
			b[i]=x;
		}
		int i=0;
		for(i=0;i<n-1;i++)
		{
			if(a[i]!=b[i])
			{
				break;
			}
		}
		cout<<i+1<<endl;
	}
}

