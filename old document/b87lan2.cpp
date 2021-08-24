#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,max1,max2;
		cin>>n;
		long long a[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		max1=a[0];
		for(int i=0;i<n;i++)
		{
			max2=1;
			for(int j=i;j<n;j++)
			{
				max2*=a[j];
				if(max2>max1)max1=max2;
			}
		}
		cout<<max1<<endl;
	}
}

