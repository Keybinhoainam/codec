#include<bits/stdc++.h>
using namespace std;
struct node{
	public:
	int val;
	node *l,*r;
	node(int x)
	{
		val=x;
		l=r=NULL;
	}
};
//node* newNode(int data)
//{
//    node* Node = new node();
//    Node->val= data;
//    Node->l = NULL;
//    Node->r = NULL;
// 
//    return (Node);
//}
int seach1(int a[],int val,int st,int end)
{
	int i;
	for(i=st;i<=end;i++)
	{
		if(a[i]==val)return i;
	}
}
int prec;
node* kt(int  in[],int pre[],int st,int end,int n)
{
	
	if(st>end)return NULL;

		node *tmp=new node(pre[prec++]);
	if(st==end)return tmp;
	int index=seach1(in,tmp->val,st,end);
	
	tmp->l=kt(in,pre,st,index-1,n);
	tmp->r=kt(in,pre,index+1,end,n);
	return tmp;
//	}
}
void print1(node*root)
{
	if(root!=NULL)
	{
		print1(root->l);
		print1(root->r);
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
		int in[n+5],pre[n+5];
		for(int i=0;i<n;i++)
		{
			cin>>in[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>pre[i];
		}
		prec=0;
		node *t=kt(in,pre,0,n-1,n);
		
		print1(t);
		cout<<endl;
	}
}

