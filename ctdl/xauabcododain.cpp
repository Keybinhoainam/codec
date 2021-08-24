#include<bits/stdc++.h>
using namespace std;
void kt(int i,int n,char s[])
{
	if(i==n)
	{
//		for(int i=0;i<n;i++)
//		{
//			cout<<
//		}
		cout<<s<<" ";
	}
	else
	{
		for(char j='A';j<='B';j++)
		{
			s[i]=(char)j;
			kt(i+1,n,s);
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		char s[10000];
		kt(0,n,s);
		cout<<endl;
	}
}

