#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,a[1005],x=100000,kq=0,check=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<n;i++)
		{
			x=a[i];
			for(int j=i-1;j>=0;j--)
			{
				if(x>=a[j]&&a[j]<=a[i])
				{
					x=a[j];
					check=1;
				}
			}
			if((a[i]-x)>kq)kq=(a[i]-x);
		}
		
		if(check==1)cout<<kq<<endl;
		else cout<<-1<<endl;
	}
}

