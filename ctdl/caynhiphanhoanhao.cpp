#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *l;
	node *r;
	node(int x)
	{
		data=x;
		l=r=NULL;
	}
};
void makenode(node *root,int val,int x)
{
	if(x=='L')
	{
		root->l= new node(val);
	}
	if(x=='R')
	{
		root->r=new node(val);
	}
}
void insert(node* root,int u,int v,char x)
{
	if(root==NULL)return;
	if(root->data==u)
	{
		makenode(root,v,x);
	}
	else
	{
		insert(root->l,u,v,x);
	insert(root->r,u,v,x);
	}
}
int height(node*root)
{
	if(root==NULL)return 0;
	return 1+max(height(root->l),height(root->r));
}
bool kt(node*root,int lv,int h)
{
//	cout<<1<<endl;
	if(root==NULL)return 1;
	if((root->l!=NULL&&root->r==NULL)||(root->l==NULL&&root->r!=NULL))return 0;
	if(root->l==NULL&&root->r==NULL&&lv!=h)return 0;
	return kt(root->l,lv+1,h)&&kt(root->r,lv+1,h);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,u,v;
		char x;
		cin>>n;
		node *t=NULL;
		for(int i=0;i<n;i++)
		{
			cin>>u>>v>>x;
			if(t==NULL)
			{
//				cout<<1<<endl;
				t=new node(u);
				makenode(t,v,x);
			}
			else insert(t,u,v,x);
		}
		int h=height(t);
		if(kt(t,1,h))cout<<"PERFECT";
		else cout<<"NO";
		cout<<endl;
	}
}
