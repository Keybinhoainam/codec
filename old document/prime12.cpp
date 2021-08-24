#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k,i=2,t=0,a[1000];
		cin>>n>>k;
		while(i*i<=n)
		{
			if(n%i==0)
			{
				a[t++]=i;
				n/=i;
			}
			else i++;
		}
		if(n>1)a[t++]=n;
		if(t<k)cout<<-1;
		else cout<<a[k-1];
		cout<<endl;
	}
}
