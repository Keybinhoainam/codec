#include<bits/stdc++.h>
using namespace std;
	string s[10];
	int n;
	long long f[1000][1000],kq;
	int x[1000];
map<int,bool> check;
void hv(int t)
{
	for(int i=0;i<n;i++)
	{
		if(check[i]==0)
		{
			check[i]=1;
			x[t]=i;
		if(t==n-1)
		{
			long long tong=0;
			for(int j=0;j<t;j++)
			{
				for(int k=0;k<s[x[j]].length();k++)
				{
					if(f[x[j+1]][s[x[j]][k]]==1)
					{
						tong+=1;
					}
//					if(f[x[j-1]][s[x[j]][k]]==1)
//					{
//						tong+=1;
//					}
				}
				if(tong>=kq)break;
			}
			if(tong<kq)kq=tong;
		}
		else hv(t+1);
		check[i]=0;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	kq=INT_MAX;
	memset(f,0,sizeof(f));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		for(int j=0;j<s[i].length();j++)
		{
			f[i][s[i][j]]=1;
		}
	}
	hv(0);
	cout<<kq<<endl;
	
	
}

