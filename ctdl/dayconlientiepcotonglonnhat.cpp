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
		for(int i=0;i<n;i++)cin>>a[i];
		long long kq=a[0],tong;
		for(int i=0;i<n;i++)
		{
			tong=0;
			for(int j=i;j<n;j++)
			{
				tong+=a[j];
				kq=max(kq,tong);
//				cout<<tong<<" "<<kq<<endl;
			}
		}
		cout<<kq<<endl;
	}
}

