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
		int a[10000]={0};
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)a[j]=1;
			}
		}
		for(int i=2;i<=n;i++)
		{
			if(a[i]==0&&n%i==0)
			{
				int p=0;
					while(n%i==0)
					{
						p++;
						n/=i;
					}
					cout<<i<<" "<<p<<" ";
				
			}
		}
		cout<<endl;
	}
}
