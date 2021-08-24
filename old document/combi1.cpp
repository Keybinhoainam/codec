#include<bits/stdc++.h>
using namespace std;
int a[20],n;
void sinh(int i)
{
	if(i==n+1)
	{
		for(int j=1;j<=n;j++)cout<<a[j];
		cout<<" ";
	}
	else
	{
		for(int j=0;j<2;j++)
		{
			a[i]=j;
			sinh(i+1);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		cin>>n;
		sinh(1);
		cout<<endl;
	}
}

