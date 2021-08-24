#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node*l,*r;
	node(int x)
	{
		val=x;
		l=r=NULL;
	}
};
void insert(node*root,int val,char x)
{
	if(x=='L')
	{
		root->l=new node(val);
	}
	else
	{
		root->r=new node(val);
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
int kt(node*r1,node*r2)
{
	if(r1==NULL&&r2==NULL)return 1;
	if((r1->val!=r2->val)||(r1==NULL&&r2!=NULL)||(r2==NULL&&r1!=NULL))return 0;
	return kt(r1->l,r2->l)&&kt(r1->r,r2->r);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n1;
		cin>>n1;
		node*root1=NULL;
		int tmp1,tmp2;
		char tmp3;
		for(int i=0;i<n1;i++)
		{
			cin>>tmp1>>tmp2>>tmp3;
			if(root1==NULL)
			{
				root1=new node(tmp1);
				insert(root1,tmp2,tmp3);
			}
			else makenode(root1,tmp1,tmp2,tmp3);
		}
		int n2;
		cin>>n2;
		node*root2=NULL;
		for(int i=0;i<n2;i++)
		{
			cin>>tmp1>>tmp2>>tmp3;
			if(root2==NULL)
			{
				root2=new node(tmp1);
				insert(root2,tmp2,tmp3);
			}
			else makenode(root2,tmp1,tmp2,tmp3);
		}
		cout<<kt(root1,root2)<<endl;
	}
}

