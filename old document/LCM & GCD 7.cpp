#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long a,long long b)
{
	return a*b/__gcd(a,b);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long t=bcnn(bcnn(x,y),bcnn(y,z));
		double m=pow(10.00,n-1)/t;
		if(t>=pow(10,n-1)&&t<pow(10,n))
		{
			cout<<t;
		}
		else 
		{
			if(m<1)cout<<-1;
			else cout<<(long long)ceil(m)*t;
		}
		cout<<endl;
	}
}

