#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
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
		int kq=-1;
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]>a[j]&&a[i]-a[j]>kq)kq=a[i]-a[j];
			}
		}
		cout<<kq<<endl;
	}
}

