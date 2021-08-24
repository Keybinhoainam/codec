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
		int a[n+5][n+5];
		for(int i=0;i<n;i++)
		{
			cin>>a[0][i];
		}
//		cout<<"[";
//		for(int i=0;i<n;i++)
//		{
//			if(i==n-1)cout<<a[i];
//			else cout<<a[i]<<" ";
//		}
//		cout<<"]"<<endl;
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<n-i;j++)
			{
				a[i][j]=a[i-1][j]+a[i-1][j+1];
			}
//			cout<<"[";
//			for(int j=0;j<n-i;j++)
//			{
//				if(j==n-1-i)cout<<a[j];
//			else cout<<a[j]<<" ";
//			}
//			cout<<"]"<<endl;
		}
		for(int i=n-1;i>=1;i--)
		{
			cout<<"[";
			for(int j=0;j<n-i;j++)
			{
				if(j==n-1-i)cout<<a[i][j];
			else cout<<a[i][j]<<" ";
			}
			cout<<"]"<<" ";
		}
		cout<<"[";
		for(int i=0;i<n;i++)
		{
			if(i==n-1)cout<<a[0][i];
			else cout<<a[0][i]<<" ";
		}
		cout<<"]"<<endl;
	}
}

