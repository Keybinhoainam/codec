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
		long long kq=INT_MIN,tong[n];
		tong[0]=a[0];
		for(int i=1;i<n;i++)
		{
			tong[i]=(tong[i-1]+a[i]>a[i])?tong[i-1]+a[i]:a[i];
			if(tong[i]>kq)kq=tong[i];
		}
		cout<<kq<<endl;
	}
}

