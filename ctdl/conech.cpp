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
		map<long long,long long>c;
		c[1]=1;c[2]=2;c[3]=4;
		for(int i=4;i<=n;i++)
		{
			c[i]=c[i-1]+c[i-2]+c[i-3];
		}
		cout<<c[n]<<endl;
	}
}

