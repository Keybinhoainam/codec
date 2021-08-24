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
		int a[n1+5][n2+5];
		memset(a,0,sizeof(a));
		for(int i=0;i<=n1;i++)
		{
			for(int j=0;j<=n2;j++)
			{
				if(i==0)a[i][j]=j;
				else if(j==0){
					a[i][j]=i;
					
				}else if(s1[i-1]==s2[j-1])
				{
					a[i][j]=a[i-1][j-1];
				}else
				{
					a[i][j]=1+min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]));
				}
			}
		}
		
		cout<<a[n1][n2]<<endl;
	}
}

