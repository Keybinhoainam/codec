#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		
		int kq=1,n=s.length();
		bool f[n][n];
		for(int i=0;i<n;i++)f[i][i]=1;
		for(int k=1;k<=n-1;k++)
		{
			for(int i=0;i<s.length()-k;i++)
			{
				int j=i+k;
				f[i][j]=0;
				if(s[i]==s[j])
				{
					if(k>1)f[i][j]=f[i+1][j-1];
					else f[i][j]=1;
					if(f[i][j]==1)kq=max(kq,j-i+1);
					
				}
				
			}
		}
		cout<<kq<<endl;
	}
}

