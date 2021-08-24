#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long dem=0;
		string s;
		fflush(stdin);
		getline(cin,s);
		int i=0;
		while(i<s.length())
		{
			while(s[i]==' '||s[i]=='\t'||s[i]=='\n')i++;
   			if(i<s.length()-1)
			{
				i++;
				dem++;
			}
			while(s[i]!='\t'&&s[i]!='\n'&&s[i]!=' '&&i<s.length()-1)i++;
			if(i<s.length())i++;
		}
		cout<<dem<<endl;
	}
}


