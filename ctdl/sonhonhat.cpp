#include<bits/stdc++.h>
using namespace std;
string kt()
{
	int s,d;
		cin>>s>>d;
		int t=0;
		string so;
		for(int i=1;i<d;i++)
		{
			int j=9;
			while(s-j<1&&j>=0)j--;
			if(j<0)return "-1";
			so=(char)(j+'0')+so;
			t++;
			s-=j;
		}
		if(s>=10)return "-1";
		so=(char)(s+'0')+so;
		return so;
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

