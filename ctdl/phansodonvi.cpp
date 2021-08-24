#include<bits/stdc++.h>
using namespace std;
void kt(long long tu,long long mau)
{
	if(mau%tu==0)
	{
		cout<<"1/"<<mau/tu;
		return;
	}
	long long n=mau/tu+1;
	cout<<"1/"<<n<<" + ";
	kt(tu*n-mau,n*mau);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long t,m;
		cin>>t>>m;
		kt(t,m);
		cout<<endl;
	}
}

