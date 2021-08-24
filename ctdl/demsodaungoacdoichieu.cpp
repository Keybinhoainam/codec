#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int l=0,r=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==')')
			{
				if(l==0)r++;
				else l--;
			}
			else
			{
				l++;
			}
		}
		cout<<(l+r)/2+(l%2)<<endl;
	}
}

