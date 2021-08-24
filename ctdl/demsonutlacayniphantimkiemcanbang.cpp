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
node* insert(node*root,int val)
{
	if(root==NULL)
	{
		return new node(val);
	}
	if(root->val>val)
	{
		root->l=insert(root->l,val);
	}
	else
	{
		root->r=insert(root->r,val);
	}
	return root;
}
void ktleaf(node*root,int &dem)
{
	if(root==NULL)return;
	if(!root->l&&!root->r)dem++;
	ktleaf(root->l,dem);
	ktleaf(root->r,dem);
}
node*kt(node*root,int a[],int st,int en)
{
	if(st>en)return NULL;
		int t=en-st+1;
		int x=((t%2==0)?(t/2):(t/2+1))-1+st;
		root=new node(a[x]);
		root->l=kt(root->l,a,st,x-1);
		root->r=kt(root->r,a,x+1,en);
		return root;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		node*root=NULL;
		root=kt(root,a,0,n-1);
		int dem=0;
		ktleaf(root,dem);
		cout<<dem<<endl;
	}
}

