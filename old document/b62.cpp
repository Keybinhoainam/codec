#include<bits/stdc++.h>
using namespace std;
long long a,x,y;
long long ucln(long long c,long long d)
{
	if(d==0)return c;
	else return ucln(d,c%d);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>a>>x>>y;
		long long t=ucln(x,y);
		for(int i=0;i<t;i++)cout<<a;
		cout<<endl;
	}
}

