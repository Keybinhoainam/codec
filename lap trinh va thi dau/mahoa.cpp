#include<bits/stdc++.h>
using namespace std;
char ssort[1000];
map<int,int>c;
int c1[1000][1000]
void sstp()
{
	for(int i=0;i<l;i++)
	{
		if(c[i]==0)
		{
			for(int j=0;j<l;j++ )
			{
				int dem=0;
				if(s1[i][t1]==s1[j][t2]&&i!=j&&c[j]==0)
				{
					c1[i][dem]=j;
					dem++;
				}
			}
			sort(c1[i],c[i]+dem,cmp1);
			if(dem>2&&s1[c1[i][0]][t2]!=s1[c1[i][1]][t2])
			{
				c[c1[i][0]]=i;
			}
		}
	}
}
int main()
{
	char s[1000];
	int n;
	cin>>s>>n;
	ssort=s;
	int l=stlen(s);
	char s1[1000][1000];
	for(int i=1;i<=l;i++)s1[i][l-1]=s[i-1];
	sort(ssort,ssort+l);
	for(int i=1;i<=l;i++)s1[i][0]=ssort[i-1];
	kt();
	cout<<s1[k-1]<<endl;
	
}

