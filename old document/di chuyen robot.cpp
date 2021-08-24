#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int x=0,y=0;
		int h=4;
		for(int i=0;i<s.length();i++)
		{
		if(h==1)
			{
				if(s[i]=='G')
				{
					x++;
					h=1;
				}
			if(s[i]=='L')
			{
				h=4;
				y++;
			}
			if(s[i]=='R')
			{
				y--;
				h=3;
			}
			if(s[i]=='B')
			{
				h=2;
				x--;
			}
		}
		else
		{
			if(h==2)
		{
			if(s[i]=='G')
				{
					x--;
					h=2;
				}
			if(s[i]=='L')
			{
				h=3;
				y--;
			}
			if(s[i]=='R')
			{
				y++;
				h=4;
			}
			if(s[i]=='B')
			{
				h=1;
				x++;
			}
		}
		else
		{
			if(h==3)
		{
			if(s[i]=='G')
			{
				y--;
				h=3;
			}
			if(s[i]=='L')
			{
				h=1;
				x++;
			}
			if(s[i]=='R')
			{
				x--;
				h=2;
			}
			if(s[i]=='B')
			{
				h=4;
				y++;
			}
		}
		else
		{
			if(h==4)
		{
			if(s[i]=='G')
				{
					y++;
					h=4;
				}
			if(s[i]=='L')
			{
				h=2;
				x--;
			}
			if(s[i]=='R')
			{
				x++;
				h=1;
			}
			if(s[i]=='B')
			{
				h=3;
				y--;
			}
		}
		}
		}
		}
//			cout<<x<<" "<<y<<endl;
		}
		cout<<x<<" "<<y<<endl;
//	}
}

