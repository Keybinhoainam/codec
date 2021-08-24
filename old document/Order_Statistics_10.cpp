#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		long long a[n],f[n],kq=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			f[i]=1;
		}
		for(int i=1;i<n;i++)
		{
			for(int j=i-1;j>=0;j--)
			{
				if(a[i]>a[j]&&f[i]<f[j]+1)f[i]=f[j]+1;
				
			}
			if(f[i]>kq)kq=f[i];
		}
		cout<<kq<<endl;
	}
}

