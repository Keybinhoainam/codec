#include<bits/stdc++.h>
using namespace std;
int n,m,e,is,js,check,it,jt;
char s[1000][1000];
int x[]={-1, 0, 0, 1};
int y[]={ 0, 1,-1, 0};
struct imf{
	int x,y,h;
};
bool check1(int i,int j)
{
	if(i<n&&i>=0&&j<m&&j>=0)return 1;
	return 0;
}
bool check2(int i,int j)
{
	if(s[i][j]=='.'||s[i][j]=='T')return 1;
	return 0;
}
void kt()
{
	map<int,int>c[1000];
	queue<imf> q;
	c[is][js]=1;
	int tmpx,tmpy;
	for(int i=0;i<4;i++)
	{
		tmpx=is+x[i];tmpy=js+y[i];
		if(check1(is+x[i],js+y[i])&&check2(is+x[i],js+y[i]))
		{
			q.push({tmpx,tmpy,i});
			c[tmpx][tmpy]=1;
		}
	}
	while(!q.empty())
	{
//		cout<<1<<" ";
		int u;
		imf t=q.front();q.pop();
//		cout<<t.x<<" "<<t.y<<"\t";
		for(int i=0;i<4;i++)
		{
			tmpx=t.x+x[i];tmpy=t.y+y[i];
			u=(i==t.h)?c[t.x][t.y]:c[t.x][t.y]+1;
			if(check1(tmpx,tmpy)&&check2(tmpx,tmpy))
			{
//				cout<<i<<" "<<t.h<<"\t"<<tmpx<<" "<<tmpy<<"\t"<<u<<" "<<c[tmpx][tmpy];
//				if(tmpx==it&&tmpy==jt)
//				{
//					if(c[it][jt]==0)c[it][jt]=u;
//					else 
//					{
//						c[it][jt]=min(c[it][jt],u);
//					}
//				}
				if(c[tmpx][tmpy]>u&&c[tmpx][tmpy]>0)
				{
//					cout<<tmpx<<" "<<tmpy<<endl;
					c[tmpx][tmpy]=u;
					q.push({tmpx,tmpy,i});
				}
				else
				{
					if(c[tmpx][tmpy]==0)
					{
//						cout<<tmpx<<" "<<tmpy<<endl;
						c[tmpx][tmpy]=u;
						q.push({tmpx,tmpy,i});
					}
				}
				
				
			}
//			if(check1(tmpx,tmpy)&&check2(tmpx,tmpy)&&c[tmpx][tmpy])
//			{
//				c[tmpx][tmpy]=u;
//				q.push({tmpx,tmpy,i});
//			}
		}
//		cout<<endl;
	}
//cout<<c[it][jt]<<endl;
	if(c[it][jt]<=3&&c[it][jt]>0)cout<<"YES";
	else cout<<"NO";
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>s[i][j];
				if(s[i][j]=='S')
				{
					is=i;
					js=j;
				}
				if(s[i][j]=='T')
				{
					it=i;
					jt=j;
				}
			}
		}
//		for(int i=0;i<n;i++)memset(c[i],0,sizeof(c[i]));
		kt();
		cout<<endl;
	}
}
