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
node* makenode(node*root,int val1)
{
	if(root==NULL)
	{
		root=new node(val1);
		return root;
	}
	
		if(val1< root->val)root->l=makenode(root->l,val1);
		else root->r=makenode(root->r,val1);
	return root;
}
void print(node*root)
{
//	cout<<"ok1\n";
	if(root==NULL)return;
//	cout<<"ok\n";
	cout<<root->val<<" ";
	print(root->l);
	print(root->r);
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
		node*root=NULL;
		for(int i=0;i<n;i++)
		{
//			cout<<"ok\n";
			cin>>a[i];
			root=makenode(root,a[i]);
		}
		
//		cout<<root->val<<endl;
		print(root);
		cout<<endl;
	}
}
