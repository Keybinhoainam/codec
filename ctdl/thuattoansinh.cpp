#include<bits/stdc++.h>
using namespace std;
int n;
int x[10000];
void kt(int j)
{
	for(int i=0;i<2;i++)
	{
		x[j]=i;
		if(j==n/2)
		{
			if(n%2==0){
				for(int k=1;k<=n/2;k++)cout<<x[k]<<" ";
			for(int k=n/2;k>=1;k--)cout<<x[k]<<" ";
			cout<<endl;
			}
			else 
			{
				for(int k=1;k<=n/2;k++)cout<<x[k]<<" ";
				cout<<0<<" ";
			for(int k=n/2;k>=1;k--)cout<<x[k]<<" ";
			cout<<endl;
			for(int k=1;k<=n/2;k++)cout<<x[k]<<" ";
				cout<<1<<" ";
			for(int k=n/2;k>=1;k--)cout<<x[k]<<" ";
			cout<<endl;
			}
		}
		else kt(j+1);
	}
}
int main()
{
	cin>>n;
	kt(1);
	
}

