#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node *l,*r;
	node(int x)
	{
		val=x;
		l=r=NULL;
	}
};
void insert(node*root,int t2,char t3)
{
	if(t3=='R')
	{
		root->r=new node(t2);
	}
	if(t3=='L')
	{
		root->l=new node(t2);
	}
}
void makenode(node*root,int t1,int t2,char t3)
{
	if(root==NULL)return;
	if(root->val==t1)
	{
		insert(root,t2,t3);
		return;
	}
	makenode(root->l,t1,t2,t3);
	makenode(root->r,t1,t2,t3);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,t1,t2;
		cin>>n;
		char t3;
		node*root=NULL;
		for(int i=0;i<n;i++)
		{
//			cout<<" ok1"<<endl;
			cin>>t1>>t2>>t3;
			if(root==NULL)
			{
				root=new node(t1);
				insert(root,t2,t3);
			}
			else
			{
				makenode(root,t1,t2,t3);
			}
		}
		queue<node*>q;
		q.push(root);
		cout<<root->val<<" ";
		while(!q.empty())
		{
//			cout<<" ok"<<endl;
			node *tmp=q.front();q.pop();
//			cout<<tmp->l->val<<" "<<tmp->r->val<<" ";
			if(tmp->l!=NULL)
			{
				cout<<tmp->l->val<<" ";
				q.push(tmp->l);
			}
			if(tmp->r!=NULL)
			{
				cout<<tmp->r->val<<" ";
				q.push(tmp->r);
			}
		}
		cout<<endl;
		
	}
}

