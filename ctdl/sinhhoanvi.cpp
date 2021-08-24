#include<bits/stdc++.h>
using namespace std;
void kt(int i,int n,int a[],bool x[])
{
	for(int j=1;j<=n;j++)
	{
		if(x[j]==0)
		{
			a[i]=j;
			if(i==n)
			{
				for(int k=1;k<=n;k++)cout<<a[k];
				cout<<" ";
			}
			else
			{
				x[j]=1;
				kt(i+1,n,a,x);
				x[j]=0;
			}
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n+5];
		bool x[15];
		memset(x,false,sizeof(x));
		kt(1,n,a,x);
		cout<<endl;
	}
}

