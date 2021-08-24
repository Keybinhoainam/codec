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
void insert(node*root,long long t2,char t3)
{
	
	if(t3=='L')
	{
		root->l=new node(t2);
	}
	if(t3=='R')
	{
		root->r=new node(t2);
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
	if(root->l)makenode(root->l,t1,t2,t3);
	if(root->r)makenode(root->r,t1,t2,t3);
}
int a[1005],dem;
void cv(node*root)
{
	if(root==NULL)return;
	if(root->r)cv(root->r);
//	cout<<root->val<<"\t"<<a[dem]<<endl;
	root->val=a[dem++];
	if(root->l)cv(root->l);
}
void print(node*root)
{
	if(root==NULL)return;
	print(root->l);
	cout<<root->val<<" ";
	print(root->r);
}
bool ss(int i,int j) 
{
	return i>j;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long n,u,v;
		char x;
		cin>>n;
		node *t=NULL;
		dem=0;
		map<int,int>c;
		for(int i=0;i<n;i++)
		{
			cin>>u>>v>>x;
			if(!c[u])
			{
				c[u]=1;
				a[dem++]=u;
			}
			if(!c[v])
			{
				c[v]=1;
				a[dem++]=v;
			}
			if(t==NULL)
			{
//				cout<<1<<endl;
				t=new node(u);
				insert(t,v,x);
			}
			else makenode(t,u,v,x);
		}
		sort(a,a+dem,ss);
		dem=0;
		cv(t);
		print(t);
		cout<<endl;
	}
}

