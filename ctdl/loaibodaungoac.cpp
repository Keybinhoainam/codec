#include<bits/stdc++.h>
using namespace std;
struct res{
	string s;
	int lv;
};
int check;
bool test(string s)
{
	if(s.empty())return 0;
	int cnt = 0,t=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
        	cnt++;t=1;
		}
        else 
		if (s[i] == ')')
        {
        	cnt--;t=1;
		}
            
        if (cnt < 0)
            return false;
    }
    return (cnt == 0)&&t;
}
string kq[100];int dem;
void kt(string s)
{
	if(s.empty())return;
	queue<res>q;
	set<string>c;
	res tmp={s,0};
	c.insert(s);
	q.push(tmp);
	int lv=INT_MAX;
	while(!q.empty())
	{
		res tmp2=q.front();q.pop();
		if(tmp2.lv>lv)return;
		if(test(tmp2.s))
		{
			lv=min(lv,tmp2.lv);
			check=1;
			kq[dem++]=tmp2.s;
			continue;
		}
		for(int i=0;i<tmp2.s.length();i++)
		{
			
			if(s[i]=='('||s[i]==')')
			{
				string t1=tmp2.s.substr(0,i),t2=tmp2.s.substr(i+1);
			string t3=t1+t2;
			if(c.find(t3)==c.end())
			{
				q.push({t3,tmp2.lv+1});
				c.insert(t3);
			}
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
		string s;
		cin>>s;
		dem=0;
		kt(s);
		sort(kq,kq+dem);
		for(int i=0;i<dem;i++)
		{
			cout<<kq[i]<<" ";
		}
		if(dem==0)cout<<-1;
		cout<<endl;
	}
}


