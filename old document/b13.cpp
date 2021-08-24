#include<iostream>
using namespace std;
int main()
{
	string s;
	char s1;
	getline(cin,s);
	int i=s.length()-1,j;
	while(s[i]!=' ')i--;
	int n=i;
	for(j=i+1;j<s.length();j++)
	{
		s1=s[j]+32;
		if(s[j]<='Z'&&s[j]>='A')cout<<s1;
		else cout<<s[j];
	}
	s1=s[0]+32;
	if(s[0]<='Z'&&s[0]>='A')cout<<s1;
	else cout<<s[0];
	i=0;
	while(i<n)
	{
		while(s[i]!=' ')i++;
		if(i<n)
		{
			s1=(char)s[i+1]+32;
			if(s[i+1]<='Z'&&s[i+1]>='A')cout<<s1;
			else cout<<s[i+1];
			i++;
		}
	}
	cout<<"@ptit.edu.vn";

	
}

