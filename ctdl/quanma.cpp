#include<bits/stdc++.h>
using namespace std;
struct toado{
	int x,y,lev;
	
};
int X[]={-2,-2,-1,-1, 1, 1, 2, 2};
int Y[]={-1, 1,-2, 2,-2, 2,-1, 1};
void xuly(string s,toado &x)
{
	x.x=s[0]-'a'+1;
	x.y=s[1]-'0';
}
bool kt(int x)
{
	if(x>=1&&x<=8)return 1;
	return 0;
}
int kt(toado st,toado en)
{
	queue<toado>q;
//	cout<<st.x<<endl;
	q.push(st);
	bool c[10][10]={0};
	c[st.x][st.y]=1;
	while(!q.empty())
	{
		toado t=q.front(),tmp;q.pop();
		for(int z=0;z<8;z++)
		{
			tmp.x=t.x+X[z];tmp.y=t.y+Y[z];
			if(c[tmp.x][tmp.y]==1)continue;
			if(kt(tmp.x)&&kt(tmp.y))
			{
				tmp.lev=t.lev+1;
				q.push(tmp);
				if(tmp.x==en.x&&tmp.y==en.y)return tmp.lev;
				c[tmp.x][tmp.y]=1;
			}
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s1,s2;
		cin>>s1>>s2;
		toado st,en;
		xuly(s1,st);
		xuly(s2,en);
		st.lev=0;
		if(s1==s2)cout<<0<<endl;
		else cout<<kt(st,en)<<endl;
//		xuly(s1,);
//		xuly(s2);
	}
}

