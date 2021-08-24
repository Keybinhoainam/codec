#include<bits/stdc++.h>
using namespace std;
string kt()
{
	int n;
		cin>>n;
		int t=n/7;
		while(t>=0)
		{
			if((n-t*7)%4==0)
			{
				string s1;
				s1.insert(s1.end(),t,'7');
				s1.insert(s1.begin(),(n-t*7)/4,'4');
				return s1;
			}
			t--;
		}
		return "-1";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cout<<kt()<<endl;
	}
}

