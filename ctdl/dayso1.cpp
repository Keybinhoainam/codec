#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"[";
		for(int i=0;i<n;i++)
		{
			if(i==n-1)cout<<a[i];
			else cout<<a[i]<<" ";
		}
		cout<<"]"<<endl;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				a[j]+=a[j+1];
			}
			cout<<"[";
			for(int j=0;j<n-i;j++)
			{
				if(j==n-1-i)cout<<a[j];
			else cout<<a[j]<<" ";
			}
			cout<<"]"<<endl;
		}
	}
}

