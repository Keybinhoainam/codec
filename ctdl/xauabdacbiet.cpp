#include<bits/stdc++.h>
using namespace std;
string s1;
string s3[10000];
int dem;
void kt(string s,int t,int n,int k)
{
	for(char i='A';i<='B';i++)
	{
		s.push_back(i);
		if(t==n-k-1)
		{
			int check=0;
			char s5[k];
			for(int j=0;j<=n-k-k;j++)
			{
				s.copy(s5,k,j);
				if(s5==s1.c_str())
				{
					check=1;
					break;
				}
			}
			if(check==1)
			{
				s.pop_back();
				continue;
			}
			string s2;
			for(int j=0;j<=n-k-1;j++)
			{
				if(s[j]=='B'&&j==0)
				{
					s2=s;
					s2=s1+s2;
					s3[dem++]=s2;
//					cout<<s2<<endl;
				}
				if(s[j-1]=='B'&&s[j]=='B'&&j>=1)
				{
					s2=s;
					s2.insert(j,s1);
					s3[dem++]=s2;
//					cout<<s2<<endl;
				}
				if(s[j]=='B'&&j==n-k-1)
				{
					s2=s;
					s2=s2+s1;
					s3[dem++]=s2;
//					cout<<s2<<endl;
				}
			}
		}
		else kt(s,t+1,n,k);
		s.pop_back();
	}
}
int main()
{
	int n,k;
	cin>>n>>k;
	string s;
	s1.insert(s1.begin(),k,'A');
	dem=0;
	kt(s,0,n,k);
	sort(s3,s3+dem);
	cout<<dem<<endl;
	for(int i=0;i<dem;i++)cout<<s3[i]<<endl;
}

