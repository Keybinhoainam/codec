#include<bits/stdc++.h>
using namespace std;
long long n;
int check[25],a[25];
void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(check[j]==0)
		{
			check[j]=1;
			a[i]=j;
			if(i==n)
			{
				for(int i=1;i<=n;i++)cout<<a[i];
				cout<<" ";
			}
			else
			{
				Try(i+1);
			}
			check[j]=0;
		}
	}
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>n;
		memset(check,0,sizeof(check));
		Try(1);
		cout<<endl;
	}
}

