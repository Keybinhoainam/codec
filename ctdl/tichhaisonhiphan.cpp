#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		cin>>s1>>s2;
		long long so1=0,so2=0;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]=='1')
			{
				so1+=pow(2,s1.length()-1-i);
			}
		}
		for(int i=0;i<s2.length();i++)
		{
			if(s2[i]=='1')
			{
				so2+=pow(2,s2.length()-1-i);
			}
		}
		cout<<so1*so2<<endl;
	}
}

