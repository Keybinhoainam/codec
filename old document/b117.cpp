#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		long long i=0,t,tong=0,check;
		while(i<s.length())
		{
			check=0;
			string s1="";
			while((s[i]>'9'||s[i]<'0')&&i<s.length())
			{
				i++;
			}
			while(s[i]<='9'&&s[i]>='0'&&i<s.length())
			{
				check=1;
				s1=s1+s[i];
				i++;
			}
			if(check==1)
			{
				t=atoi(s1.c_str());
			tong+=t;
			}
		}
//		cout<<endl;
		cout<<tong<<endl;
		
	}
}

