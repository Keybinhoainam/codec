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
//struct point
//{
//    int u;
//    int v;
//    char x;
//};
//
//void AddNode(int n, point *point, node **root)
//{
//    map<int, node*> m;
//    for(int i = 0; i < n; i++)
//    {
//        if(m.find(point[i].u) == m.end())
//        {
//            (*root) = new node(point[i].u);
//            if(point[i].x == 'L')
//            {
//                (*root)->l = new node(point[i].v);
//                m[point[i].v] = (*root)->l;
//            }
//            else 
//            {
//                (*root)->r = new node(point[i].v);
//                m[point[i].v] = (*root)->r;
//            }
//            m[point[i].u] = (*root);
//        }
//        else
//        {
//            if(point[i].x == 'L')
//            {
//                m[point[i].u]->l = new node(point[i].v);
//                m[point[i].v] = m[point[i].u]->l;
//            }
//            else
//            {
// 
//                m[point[i].u]->r = new node(point[i].v);
//                m[point[i].v] = m[point[i].u]->r;        
//            }
//        }
//    }
//}
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
int kt2(node*root,int &res)
{
	if(root==NULL)return 0;
	if(!root->l&&!root->r)return root->val;
	int ls=kt2(root->l,res);
	int rs=kt2(root->r,res);
	if(root->l&&root->r)
	{
		res=max(res,ls+rs+root->val);
		return max(ls,rs)+root->val;
	}
	return ( (root->l)?ls:rs ) + root->val;
}
int kt(node*root)
{
	int res=INT_MIN;
	int val=kt2(root,res);
	if(res==INT_MIN)return val;
	return res;
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
//        AddNode(n, points, &root);
		cout<<kt(t)<<endl;
	}
}

