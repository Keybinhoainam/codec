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
		long long a[n],f[n],max1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			f[i]=a[i];
		}
		max1=a[0];
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(f[j]+a[i]>f[i]&&a[i]>a[j])f[i]=f[j]+a[i];
			}
			if(max1<f[i])max1=f[i];
		}
		cout<<max1<<endl;
		
	}
}

