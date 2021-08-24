#include<bits/stdc++.h>
using namespace std;
void so(int i,int n,char s2[])
{
		for(char j=1+'0';j<=n+'0';j++)
		{
			s2[i]=j;
			if(i==2*n)
			{
				for(int k=1;k<=2*n;k++)cout<<s2[k];
				cout<<endl;
			}
			else so(i+1,n,s2);
			
		}
	
}
void kt(int i,int n,char s1[],map<char,bool> c)
{
	for(char j='A';j<(char)('A'+n);j++)
	{
		if(c[j]==0)
		{
			s1[i]=j;
			if(i==n)
			{
				char s2[2*n+5];
				for(int k=1;k<=n;k++)s2[k]=s1[k];
				so(i+1,n,s2);
			}
			else
			{
				c[j]=1;
				kt(i+1,n,s1,c);
				c[j]=0;
			}
		}
		
	}
}
int main()
{
	
		int n;
		cin>>n;
		char s1[2*n+5];
		map<char,bool> c;
		kt(1,n,s1,c);
		cout<<endl;
	
}

