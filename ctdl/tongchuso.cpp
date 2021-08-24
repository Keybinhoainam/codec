#include<bits/stdc++.h>
using namespace std;
int f[105][10005],check;
int minnum(int a,int b)
{
	if(a<0||b<0||a>b)return -1;
	if(a==0&&b==0)return 0;
	if(f[a][b]!=-1)return f[a][b];
	int kq=101;
	for(int i=9;i>=1;i--)
	{
		int k=minnum(a-i,b-i*i);
		if(k!=-1)
		{
			kq=min(kq,k+1);
		}
	}
	return f[a][b]=kq;
}
void kt(int a,int b)
{
	int k=minnum(a,b);
	if(k==-1||k>100)
	{
		cout<<-1;
		return;
	}
	while(a>0&&b>0)
	{
		for(int i=1;i<=9;i++)
		{
			if(a>=i&&b>=i*i&&1+f[a-i][b-i*i]==f[a][b])
			{
				cout<<i;
				a-=i;
				b-=i*i;
				break;
			}
		}
	}
}
int main()
{
	memset(f,-1,sizeof(f));
	f[0][0]=0;
	int T;
	cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		check=0;
		kt(a,b);
//		if(check==0)cout<<-1<<endl;
		cout<<endl;
	}
}

