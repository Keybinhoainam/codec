#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		long long n;
		cin>>n;
		int a[1000]={0};
//		memset(a,1,sizeof(a));
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)a[j]=1;
			}
		}
		for(int i=2;i<=n;i++)
		{
			if(a[i]==0)cout<<i<<" ";
		}
		cout<<endl;
	}
}
