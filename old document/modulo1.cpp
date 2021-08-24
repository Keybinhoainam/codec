#include<bits/stdc++.h>
using namespace std;
long long x,y,p;
long long power()
{
	long long tich=1;
	long long t=x%p;
	for(int i=0;i<y;i++)
	{
		tich=(tich*t)%p;
	}
	return tich;
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		cin>>x>>y>>p;
		cout<<power()<<endl;
	}
}

