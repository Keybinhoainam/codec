#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		map<int,int>b;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		long long kq=0;
		for(int i=0;i<n;i++)
		{
			if(k-a[i]==a[i])
			{
				kq+=(b[a[i]]-1);
			}
			else kq+=b[k-a[i]];
		}
		cout<<kq/2<<endl;
	}
}

