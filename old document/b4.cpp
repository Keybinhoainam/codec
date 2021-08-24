#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,i=2;
		cin>>n;
		for(i=2;i*i<=n;i++)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n/=i;
			}
        }
        if(n>1)cout<<n;
		cout<<endl;
	}
}

