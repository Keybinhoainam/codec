#include<bits/stdc++.h>
using namespace std;
int n;
string s[20];
int res,chuaxet[1000];

int chung(string s1,string s2)
{
	int dem=0;
	for(int i=0;i<s1.length();i++)
	{
		for(int j=0;j<s2.length();j++)
		{
			if(s1[i]==s2[j])
			{
				dem++;
				break;
			}
		}
	}
	return dem;
}
void kt(int t,int tmp,int dem,int a[100][100])
{
	if(dem==n)
	{
		res=tmp;
		return;
	}
	for(int i=1;i<=n;i++)
	{
		if(chuaxet[i]==0&&tmp+a[t][i]<res)
		{
			chuaxet[i]=1;
			kt(i,tmp+a[t][i],dem+1,a);
			chuaxet[i]=0;
		}
	}
}
int main()
{
//	int T;
//	cin>>T;
//	while(T--)
//	{
		memset(chuaxet,0,sizeof(chuaxet));
		int a[100][100];
		cin>>n;
//		cout<<"ok";
		for(int i=1;i<=n;i++)
		{
//			cout<<"ok";
			cin>>s[i];
//			cout<<"ok";
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(i==0)a[i][j]=a[j][i]=0;
				else a[i][j]=a[j][i]=chung(s[i],s[j]);
			}
		}
		res=INT_MAX;
		kt(0,0,0,a);
		cout<<res<<endl;
//	}
}

