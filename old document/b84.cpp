#include<bits/stdc++.h>
using namespace std;
long long n,a[100000];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		cin>>a[0];
		for(int i=1;i<n;i++)
		{
			cin>>a[i];
			if(a[i]!=0&&a[i]==a[i-1])
			{
				a[i]=0;
				a[i-1]*=2;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]!=0)cout<<a[i]<<" ";
		}
		for(int i=0;i<n;i++)
		{
			if(a[i]==0)cout<<"0 ";
		}
		cout<<endl;
	}
}

