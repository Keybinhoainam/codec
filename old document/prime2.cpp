#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		long long n,i=2;cin>>n;
		while(i*i<=n)
		{
			if(n%i==0)n/=i;
			else i++;
		}
		cout<<n<<endl;
	}
}

