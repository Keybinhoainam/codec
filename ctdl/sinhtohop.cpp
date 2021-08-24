#include<bits/stdc++.h>
using namespace std;
void kt(int i,int n,int k,int a[])
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k)
		{
			for(int t=1;t<=k;t++)cout<<a[t];
			cout<<" ";
		}
		else
		{
			kt(i+1,n,k,a);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int a[k+5];
		a[0]=0;
		kt(1,n,k,a);
		cout<<endl;
	}
}

