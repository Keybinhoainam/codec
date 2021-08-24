#include<bits/stdc++.h>
using namespace std;
int a[100];
int n,k1;
void kt(int i)
{
	for(int j=a[i-1]+1;j<=n-k1+i;j++)
	{
		a[i]=j;
		if(i==k1)
		{
			for(int k=1;k<=k1;k++)cout<<a[k]<<" ";
			cout<<endl;
		}
		else kt(i+1);	
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>k1;
		a[0]=0;
		kt(1);
	}
}

