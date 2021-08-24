#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int t=a^b;
		t=t^c;
		if(t==0)cout<<"Second";
		else cout<<"First";
		cout<<endl;
	}
}

