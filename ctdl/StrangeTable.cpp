#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		ll n,m,x;
		cin>>n>>m>>x;
		ll socot=x/n,sohang=x- socot*n;
		if(sohang==0)sohang=n;
		else socot++;
		ll kq=m*(sohang-1)+socot;
		cout<<kq<<endl;
//cout<<x<<"  "<<socot<<" "<<socot*n<<endl;
		
	}
}

