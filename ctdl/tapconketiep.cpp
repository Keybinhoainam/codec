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
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
		}
		int i=k;
		while(i>=1&&a[i]==n-k+i)i--;
		if(i==0)
		{
			for(int j=1;j<=k;j++)cout<<j<<" ";
		}
		else
		{
			for(int j=1;j<i;j++)cout<<a[j]<<" ";
			a[i]++;cout<<a[i]<<" ";
			for(int j=i+1;j<=k;j++)
			{
				a[j]=a[i]+j-i;
				cout<<a[j]<<" ";
			}
		}
		cout<<endl;
	}
}

