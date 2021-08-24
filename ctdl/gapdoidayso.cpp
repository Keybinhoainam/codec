#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,k;
		cin>>n>>k;
		while(k!=pow(2,n-1))
		{
			if(k>pow(2,n-1))k-=pow(2,n-1);
			n--;
		}
		cout<<n<<endl;
	}
}

