#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long t,tongle=0,tongchan=0;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			t=(long long)s[i]-48;
			if(i%2==0)tongle+=t;
			else tongchan+=t;
		}
		long long u1=tongle-tongchan;
		if(u1%11==0)cout<<1;
		else cout<<0;
		cout<<endl;
		
	}
}

