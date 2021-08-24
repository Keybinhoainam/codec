#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		map<char,int> a;
		int tong=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]<='9'&&s[i]>='0')
			{
				tong+=(int)(s[i]-48);
			}
			else
			{
				a[s[i]]++;
			}
		}
		for(char i='A';i<='Z';i++)
		{
			while(a[i]--)cout<<i;
		}
		cout<<tong;
		cout<<endl;
	}
}

