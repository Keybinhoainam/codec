#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		map<int,long long>t;
		long long kq=0;
		for(int i=0;i<n;i++)
		{
			t[i]=a[i];
			for(int j=i-1;j>=0;j--)
			{
				if(a[j]<a[i])
				{
					t[i]=max(t[i],t[j]+a[i]);
				}
			}
			kq=max(kq,t[i]);
		}
		cout<<kq<<endl;
	}
}

