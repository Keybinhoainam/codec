#include<bits/stdc++.h>
using namespace std;
int n;

void kt(int i,char x[])
{
//	cout<<i<<" "<<n-1<<" ";
	if(i==n-1)
	{
		x[n-1]='A';
		for(int k=0;k<n;k++)cout<<x[k];
		cout<<endl;
		return;
	}

		for(int j=0;j<=1;j++)
		{
		if(j==0)
		{
//			cout<<"ok ";
			x[i]='A';
			
			if(i<n-1) kt(i+1,x);
		}

		if(j==1&&x[i-1]!='H')
		{
			x[i]='H';
			
			if(i<n-1) kt(i+1,x);
		}
		
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
//		int n;
		cin>>n;
		char x[n+1];
		x[0]='H';
		kt(1,x);
	}
}

