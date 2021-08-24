#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
long long a[1000000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,x,q,a[10005],l,r,kq[10005];
		cin>>n>>q;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<q;i++)
		{
			kq[i]=0;
			cin>>l>>r;
			for(int j=l;j<=r;j++)
			{
				kq[i]+=a[j];
			}
		}
		for(int i=0;i<q;i++)cout<<kq[i]<<endl;
	}
}

