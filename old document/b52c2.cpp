#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		reverse(s.begin(),s.end());
		long long sum=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				int t=i%4,u;
				if(t==0)u=1;
				if(t==1)u=2;
				if(t==2)u=4;
				if(t==3)u=3;
				sum+=u;
			}
		}
		if(sum%5==0)cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

