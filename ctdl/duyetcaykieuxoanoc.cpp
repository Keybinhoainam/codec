#include<bits/stdc++.h>
using namespace std;
struct node{
	int val,lv;
	node *l,*r;
	node(int x,int lv1)
	{
		lv=lv1;
		val=x;
		l=r=NULL;
	}
};
void insert(node*root,int t2,char t3,int lv)
{
	if(t3=='R')
	{
		root->r=new node(t2,lv);
	}
	if(t3=='L')
	{
		root->l=new node(t2,lv);
	}
}
void makenode(node*root,int t1,int t2,char t3)
{
	if(root==NULL)return;
	if(root->val==t1)
	{
		insert(root,t2,t3,root->lv+1);
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
		vector<int>a[10005];
		char t3;
		node*root=NULL;
		for(int i=0;i<n;i++)
		{
//			cout<<" ok1"<<endl;
			cin>>t1>>t2>>t3;
			if(root==NULL)
			{
				root=new node(t1,0);
				insert(root,t2,t3,1);
			}
			else
			{
				makenode(root,t1,t2,t3);
			}
		}
		queue<node*>q;
		q.push(root);
		int count[10005]={0},row=0;
		a[0].push_back(root->val);
		while(!q.empty())
		{
//			cout<<" ok"<<endl;
			node *tmp=q.front();q.pop();
//			cout<<tmp->l->val<<" "<<tmp->r->val<<" ";
			if(tmp->l!=NULL)
			{
				a[tmp->lv+1].push_back(tmp->l->val);
				q.push(tmp->l);
			}
			if(tmp->r!=NULL)
			{
					a[tmp->lv+1].push_back(tmp->r->val);
				q.push(tmp->r);
			}
			row=max(row,tmp->lv);
		}
		for(int i=0;i<=row;i++)
		{
			if(i%2==0)reverse(a[i].begin(),a[i].end());
			for(int j=0;j<a[i].size();j++)
			{
				cout<<a[i][j]<<" ";
			}
		}
		cout<<endl;
		
	}
}

