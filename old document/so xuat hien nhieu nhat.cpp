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
		long long t=0,x,a[n];
		map<int,int> b,dem;
		
		for(int i=0;i<n;i++)
		{
			cin>>x;
			if(b[x]==0)
			{
				a[t++]=x;
				b[x]=1;
				dem[x]=1;
			}
			else dem[x]++;
		}
		int tong=n/2,kq=-1;
		for(int i=0;i<t;i++)
		{
			if(dem[a[i]]>tong)
			{
				tong=dem[a[i]];
				kq=a[i];
			}
		}
		if(kq>=1)cout<<kq;
		else cout<<"NO";
		cout<<endl;
	}
}

