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
void print(node*root)
{
	if(root!=NULL)
	{
		print(root->l);
		print(root->r);
		cout<<root->val<<" ";
		
		
	}
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
		for(int i=0;i<n;i++)cin>>a[i];
		node *root=NULL;
		for(int i=0;i<n;i++)
		{
			root=insert(root,a[i]);
		}
		print(root);
		cout<<endl;
	}
}

