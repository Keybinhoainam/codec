#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll n;
		cin>>n;
		ll m=5,m1,kq=0;
		while(1)
		{
			m1=m;
			while(m1%5==0)
			{
				m1/=5;
				kq++;
			}
			if(kq==n)break;
			m+=5;
		}
		cout<<m<<endl;
	}
}

