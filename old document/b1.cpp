#include<iostream>
using namespace std;
int nt(long long n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)return 0;
	}
	return 1;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,i=2;
		cin>>n;
		if(nt(n)==1)cout<<n;
		else
		{
			while(n>=i)
			{
			if(nt(n)==1)
			{
				cout<<n;
				break;
			}
			else
			{
				if(n%i==0)
				{
				cout<<i<<" ";
				n/=i;
				}
				else i++;
			}

		}
		}
		cout<<endl;
		
	}
}

