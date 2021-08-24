#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		
		string s;
		cin>>s;
		if(s[s.length()-1]=='6'&&s[s.length()-2]=='8')cout<<1;
		else cout<<0;
		cout<<endl;
	}
}

