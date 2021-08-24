#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i=s.length()-1;
	while(s[i]!=' ')i--;
	int n=i;
	char s1=s[0]-32;
	if(s[0]<='z'&&s[0]>='a')cout<<s1;
	else cout<<s[0];
	i=1;
	while(i<n)
	{
		while(s[i]!=' ')
		{
			s1=s[i]+32;
			if(s[i]<='Z'&&s[i]>='A')cout<<s1;
			else cout<<s[i];
			i++;
		}
		if(i<n)
		{
			cout<<" ";
			i++;
			s1=s[i]-32;
			if(s[i]<='z'&&s[i]>='a')cout<<s1;
			else cout<<s[i];
			i++;

		}
	}
	cout<<", ";
	i=n+1;
	while(i<s.length())
	{
		s1=s[i]-32;
		if(s[i]<='z'&&s[i]>='a')cout<<s1;
		else cout<<s[i];
		i++;
	}
}

