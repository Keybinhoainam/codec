#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s[1000];
		cin>>s[0];
		int n=1;
		while(getchar()!='\n')
		{
			cin>>s[n++];
		}
		for(int i=n-1;i>=0;i--)cout<<s[i]<<" ";
		cout<<endl;
	}
}

