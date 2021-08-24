#include<bits/stdc++.h>
using namespace std;
int n,x[1005];
void kt(int i)
{
	if(i==n-1)
	{
		if(x[i-1]==0)
		{
			x[i]=1;
		}
		if(x[i-1]==1)
		{
			x[i]=0;
		}
		for(int j=0;j<n;j++)cout<<x[j]<<" ";
		cout<<endl;
		return;
	}
		if(x[i-1]==0)
		{
			x[i]=1;
			kt(i+1);
		}
		if(x[i-1]==1)
		{
			x[i]=0;
			kt(i+1);
		}
}

int main()
{
	cin>>n;
	for(int i=0;i<=1;i++)
	{
		x[0]=i;
		kt(1);
	}
}

