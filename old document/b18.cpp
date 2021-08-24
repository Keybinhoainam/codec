#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,m;
		cin>>n>>m;
		long long t=(n*(n+1))/2;
		cout<<t%m<<endl;
	}
}

