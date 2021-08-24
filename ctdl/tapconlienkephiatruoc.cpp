#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		int a[k+5];
		for(int i=1;i<=k;i++)cin>>a[i];
		int i=k;
		while(a[i]==a[i-1]+1&&i>1)i--;
		if(a[i]==1)
		{
			for(int j=1;j<=k;j++)cout<<n-k+j<<" ";
		}
		else
		{
			a[i]--;
			for(int j=1;j<=i;j++)cout<<a[j]<<" ";
			for(int j=i+1;j<=k;j++)cout<<n-k+j<<" ";
		}
		cout<<endl;
	}
}

