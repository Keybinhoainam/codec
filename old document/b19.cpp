#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long tong=0;
		for(int i=1;i<=n;i++)
		{
			tong+=i%k;
		}
		cout<<tong<<endl;
	}
}

