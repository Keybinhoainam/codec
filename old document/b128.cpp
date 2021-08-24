#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,p,x=0;
		cin>>n>>p;
		for(int i=1;i<=n;i++)
		{
			int dem1=0,t=i;
			while(t%p==0&&t>0)
			{
				dem1++;
				t/=p;
			}
			x+=dem1;
		}
		cout<<x<<endl;
	}
}

