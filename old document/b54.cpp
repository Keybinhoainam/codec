#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		long long a[200],x,tong;
		memset(a,0,sizeof(a));
		cin>>s;
		tong=s.length();
		for(int i=0;i<s.length();i++)
		{
   			for(int j=i+1;j<s.length();j++)
   			{
   				if(s[i]==s[j])tong++;
			   }
		}
		
		cout<<tong<<endl;
	}
}

