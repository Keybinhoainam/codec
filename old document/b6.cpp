#include<iostream>
//#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n;cin>>n;
		int a[10005]={0};
//		memset(a,0,sizeof(a));
		for(int i=2;i*i<=n;i++)
		{
			if(a[i]==0)
			{
				for(int j=i*i;j<=n;j+=i)a[j]=1;
			}
		}
		for(int i=2;i<=n;i++)if(a[i]==0)cout<<i<<" ";
		cout<<endl;
	}
}

