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
		for(int i=0;i<n;i++)cin>>a[i];
		int kq=0;
		for(int i=0;i<n;i++)
		{
			for(int j=n-1;j>i;j--)
			{
				if(a[i]<=a[j]&&kq<j-i)kq=j-i;
				if(j-i<=kq)break;
			}
		}
		cout<<kq<<endl;
	}
}

