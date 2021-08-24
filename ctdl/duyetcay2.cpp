#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node*l,*r;
	node(int x)
	{
		val=x;
		r=l=NULL;
	}
};
int search(int in[],int st,int end,int val)
{
	for(int i=st;i<=end;i++)
	{
		if(in[i]==val)return i;
	}
	return -1;
}
node *kt(int in[],int lv[],int st,int end,int n)
{
	if(st>end)return NULL;
	if(st==end)
	{
		node*root=new node(in[st]);
		return root;
	}
	//tim vi tri dau tien trong mang co trong khaong st den end cua mang in
	int i=0;
	while(i<n)
	{
		if(search(in,st,end,lv[i])>=st&&search(in,st,end,lv[i])<=end)break;
		else i++;
	}
	node *tmp=new node(lv[i]);
	int t=search(in,st,end,lv[i]);
	tmp->l=kt(in,lv,st,t-1,n);
	tmp->r=kt(in,lv,t+1,end,n);
	return tmp;
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
		int in[n+5],lv[n+5];
		for(int i=0;i<n;i++)cin>>in[i];
		for(int i=0;i<n;i++)cin>>lv[i];
		node* root=kt(in,lv,0,n-1,n);
		print(root);
		cout<<endl;
	}
}

