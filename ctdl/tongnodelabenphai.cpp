#include<bits/stdc++.h>
using namespace std;
struct node{
	long long val;
	node *l,*r;
	node(long long x)
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
	makenode(root->l,t1,t2,t3);
	makenode(root->r,t1,t2,t3);
}

void kt(node*root,int h,int &tong)
{
	if(root==NULL)return;
	if(root->l==NULL&&root->r==NULL&&h==1)
	{
		tong=tong+root->val;
		return;
	}
	kt(root->l,0,tong);
	kt(root->r,1,tong);
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
		for(int i=0;i<n;i++)
		{
			cin>>u>>v>>x;
			if(t==NULL)
			{
//				cout<<1<<endl;
				t=new node(u);
				insert(t,v,x);
			}
			else makenode(t,u,v,x);
		}
//		cout << Caculate(t) << endl;
			int tong=0;
		kt(t,1,tong);
		cout<<tong;
		
		cout<<endl;
	}
}

