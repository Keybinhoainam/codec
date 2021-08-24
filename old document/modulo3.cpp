#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		long long t=(k*(k-1))/2;
		long long t3=(n-n/k*k)*(n-n/k*k+1)/2;
		cout<<(n/k)*t+t3;
		cout<<endl;
	}
}

