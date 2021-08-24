#include<bits/stdc++.h>
using namespace std;
string dic[1000];
char a[10][10];
int k,n,m;
int check[10][10];
vector<string>kq;

int x[]={-1,-1,-1, 0, 0, 1, 1, 1};
int y[]={-1, 0, 1,-1, 1,-1, 0, 1};
// cap x[],y[] bieu dien cho cach di chuyen sang o ben canh chang han:
// tai vi tri (i,j) co 8 cach di chuyen la: (i+x[1],j+y[1]),....,(i+x[7],j+y[7])
void input()
{
	cin>>k>>n>>m;
		for(int i=0;i<k;i++)cin>>dic[i];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				 cin>>a[i][j];
			}
		}
		kq.clear();
}
//bool ktxq(int i1,int j1,int ndic,int ichar)
//{
//	if(a[i1][j1]==dic[ndic]&&len==dic[ndic].length())
//	{
//		return 1;
//	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if((i==i1+1&&j=j1+1)||(i==i1+1&&j=j1-1)||(i==i1-1&&j=j1+1)||(i==i1-1&&j=j1-1))
//			{
//				if(a[i][j]==dic[ndic][ichar+1])ktxq(i,j,ndic,ichar+1);
//			}
//		}
//	}
//	return 0;
//}
void kt(int i,int j,string s)
{
	for(int i1=0;i1<k;i1++)
	{
		if(dic[i1]==s)
		{
			kq.push_back(s);
		}
	}
	for(int z=0;z<8;z++)
	{
		int t1=i+x[z],t2=j+y[z];
		if(t1>0&&t2>0&&t1<=n&&t2<=m&&!check[t1][t2])
		{
			check[t1][t2]=1;
			kt(t1,t2,s+a[t1][t2]);
			check[t1][t2]=0;
		}
	}
	
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
//		int k,m,n;
		input();
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				memset(check,0,sizeof(check));
				string s="";
				check[i][j]=1;
				kt(i,j,s+a[i][j]);
			}
		}
		if(kq.size()==0)cout<<-1;
		else
		{
			for(int i=0;i<kq.size();i++)
			{
				cout<<kq[i]<<" ";
			}
		}
		cout<<endl;
	}
}
