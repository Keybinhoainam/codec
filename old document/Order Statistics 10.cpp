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
		long long a[n],x[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			x[i]=1;
		}
		long long lm=1;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<i;j++)
			{
				if(a[j]<a[i])
				{
					x[i]=max(x[i],x[j]+1);
				}
			}
			lm=max(lm,x[i]);
		}
		cout<<lm<<endl;
	}
}

