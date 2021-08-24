#include<bits/stdc++.h>
using namespace std;
char s[10000];
void kt(int n,int t)
{
	for(char i='0';i<='1';i++)
	{
		s[t]=i;
		if(t==n)
		{
//			cout<<"OK";
			for(int j=1;j<=n;j++)cout<<s[j];
			cout<<" ";
		}
		else 
		{
			kt(n,t+1);
		}
	}
}
int main()
{

		int n;
		cin>>n;
		kt(n,1);
//	}
}

