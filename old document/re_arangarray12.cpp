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
		long long max1=a[0];
		for(int i=0;i<n;i++)
		{
			long long max2=1;
			for(int j=i;j<n;)
			{
				if(max2*a[j]!=0)
				{
					max2=max2*a[j];
					if(max2>max1)max1=max2;
					j++;
				}
				else break;
				
			}
		}
		cout<<max1<<endl;
	}
}

