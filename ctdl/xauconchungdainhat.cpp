#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		cin>>s1>>s2;
		int n1=s1.length(),n2=s2.length();
		long long c[n1+5][n2+5];
		for(int i=0;i<=n1;i++)c[i][0]=0;
		for(int j=0;j<=n2;j++)c[0][j]=0;
		for(int i=1;i<=n1;i++)
		{
			for(int j=1;j<=n2;j++)
			{
				if(s1[i-1]==s2[j-1])c[i][j]=c[i-1][j-1]+1;
				else c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
		}
		cout<<c[n1][n2]<<endl;
	}
}

