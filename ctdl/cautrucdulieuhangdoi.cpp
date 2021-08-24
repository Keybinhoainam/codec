#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		queue<int>a;
		while(n--)
		{
			int tv;
			cin>>tv;
			if(tv==1)
			{
				cout<<a.size();
			}
			if(tv==2)
			{
				if(a.empty())cout<<"YES";
				else cout<<"NO";
//				cout<<endl;
			}
			if(tv==3)
			{
				int x;
				cin>>x;
				a.push(x);
			}
			if(tv==4)
			{
				if(!a.empty())a.pop();
			}
			if(tv==5)
			{
				if(a.empty())cout<<-1;
				else cout<<a.front();
			}
			if(tv==6)
			{
				if(a.empty())cout<<-1;
				else cout<<a.back();
			}
			cout<<endl;
		}
	}
	
}

