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
		map<int,int>c;
		c[1]=0;
		for(int i=2;i<=n;i++)
		{
			c[i]=c[i-1]+1;
			if(i%2==0)c[i]=min(c[i],c[i/2]+1);
			if(i%3==0)c[i]=min(c[i],c[i/3]+1);
		}
		cout<<c[n]<<endl;
	}
}

