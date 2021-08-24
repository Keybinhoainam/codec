#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,i=2,max1=2;
		cin>>n;
		for(i=2;i*i<=n;i++)
		{
			while(n%i==0)
			{
				if(max1<i)max1=i;
				n/=i;
			}
        }
        if(n>1)if(max1<n)max1=n;
		cout<<max1<<endl;
	}
}

