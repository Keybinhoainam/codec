#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,a[10000],u=1,i=2;
		cin>>n>>k;
		while(n>1)
		{
			if(n%i==0)
			{
				a[u++]=i;
				n/=i;
   			}
			else i++;
		}
		if(k<u)cout<<a[k]<<endl;
		else cout<<-1<<endl;
	}
}

