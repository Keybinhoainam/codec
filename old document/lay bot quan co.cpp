#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long c,m;
		cin>>c>>m;
		if(c%(m+1)==0)cout<<"Second";
		else cout<<"First";
		cout<<endl;
	}
}

