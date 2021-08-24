#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int n=s.length(),count=0,count2=0;
		map<char,int> c1,c2;
		for(int i=0;i<n;i++)
		{
			if(c1[s[i]]==0)
			{
				c1[s[i]]=1;
				count++;
			}
		}
		int st=0,min1=n;
		for(int i=0;i<n;i++)
		{
			c2[s[i]]++;
			if(c2[s[i]]==1)count2++;
			if(count2==count)
			{
				while(c2[s[st]]>1)
				{
					c2[s[st]]--;
					st++;
				}
				if(min1>i-st+1)
				{
					min1=i-st+1;
				}
			}
		}
		cout<<min1<<endl;
	}
}

