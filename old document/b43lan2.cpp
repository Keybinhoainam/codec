#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,min1,min11,a[1005];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		min11=a[0]+a[1];
		min1=abs(min11);
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(abs(a[i]+a[j])<min1)
				{
					min11=a[i]+a[j];
					min1=abs(a[i]+a[j]);
				}
			}
		}
		cout<<min11<<endl;
	}
}

