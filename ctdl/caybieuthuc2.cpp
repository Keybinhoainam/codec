#include<bits/stdc++.h>
using namespace std;
int tinh(int x,int y,char dau)
{
	if(dau=='+')return x+y;
	if(dau=='-')return x-y;
	if(dau=='*')return x*y;
	if(dau=='/')return x/y;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		string s[n];
//		map<int,bool>c;
	for(int i=0;i<n;i++)cin>>s[i];
	
		for(int i=n-1;i>=2;i-=2)
		{
			int tmp=(i-2)/2;

				int tmp2=stoi(s[i]);
				int tmp1=stoi(s[i-1]);
				int tmp3=tinh(tmp1,tmp2,s[tmp][0]);
				string tmp4=to_string(tmp3);
				s[tmp]=tmp4;
		}
		cout<<s[0]<<endl;

		
		
	}
}

