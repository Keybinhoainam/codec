#include<iostream>
using namespace std;
int main()
{
	string s,tubo;
	getline(cin,s);
//	cout<<s<<endl;
//	cin.ignore();
	cin>>tubo;
//	cout<<tubo<<endl;
	for(int i=0;i<s.length();i++)
	{
		int check=1;
		for(int j=0;j<tubo.length();j++)
		{
			if(tubo[j]!=s[i+j])check=0;
		}
		if(check==1) s.erase(i,tubo.length()+1);
	}
	cout<<s;
}

