#include<bits/stdc++.h>
using namespace std;
struct node{
	char val;
	node *l,*r;
	node(int x)
	{
		val=x;
		l=r=NULL;
	}
};
void out(node*kq)
{
	if(kq!=NULL)
	{
		out(kq->l);
		cout<<kq->val;
		out(kq->r);
		
	}
}
void kt(string s)
{
	node *t1,*t2,*t;
	stack<node*>st;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
		{
			t=new node(s[i]);
			t1=st.top();st.pop();
			t2=st.top();st.pop();
			t->l=t2;
			t->r=t1;
			st.push(t);
			
		}
		else
		{
			t=new node(s[i]);
			st.push(t);
		}
	}
	out(st.top());st.pop();
	cout<<endl;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		kt(s);
	}
}

