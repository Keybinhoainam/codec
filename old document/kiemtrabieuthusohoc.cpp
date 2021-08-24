#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
		cin.ignore();
		string s;
		getline(cin,s);
		int dem1=0,dem2=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==')')dem1++;
			if(s[i]=='(')dem2++;
		}
		if(dem1==dem2)cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

