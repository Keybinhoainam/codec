#include<bits/stdc++.h>
using namespace std;
int n,m,e,is,js,check,it,jt;
char s[1000][1000];
int x[]={ 1,-1, 0, 0};
int y[]={ 0, 0,-1, 1};
struct imf{
	int x,y,h;
};
int get(int a, int b){
	int hashValue = 0, base = 13;
	hashValue = hashValue * base + a;
	hashValue = hashValue * base + b;
	return hashValue;
}
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
	unordered_map<int,int>c;
	queue<imf> q;
	c[get(is,js)]=1;
	int tmpx,tmpy;
	for(int i=0;i<4;i++)
	{
		tmpx=is+x[i];tmpy=js+y[i];
		if(check1(is+x[i],js+y[i])&&check2(is+x[i],js+y[i]))
		{
			q.push({tmpx,tmpy,i});
			c[get(tmpx,tmpy)]=1;
		}
	}
	while(!q.empty())
	{
		imf t=q.front();q.pop();
		for(int i=0;i<4;i++)
		{
			tmpx=t.x+x[i];tmpy=t.y+y[i];
			if(check1(tmpx,tmpy)&&check2(tmpx,tmpy)&&c[get(tmpx,tmpy)]==0)
			{
				c[get(tmpx,tmpy)]=(i==t.h)?c[get(t.x,t.y)]:c[get(t.x,t.y)]+1;
				q.push({tmpx,tmpy,i});
			}
		}
	}
//	cout<<c[it][jt]<<endl;
	if(c[get(it,jt)]<=3&&c[get(it,jt)]>0)cout<<"YES";
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

