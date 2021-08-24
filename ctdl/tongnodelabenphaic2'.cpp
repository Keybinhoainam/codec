
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int x)
    {
        this->data = x;
        left = right = NULL;
    }
};
struct point
{
    int u;
    int v;
    char x;
};

void AddNode(int n, point *point, node **root)
{
    map<int, node*> m;
    for(int i = 0; i < n; i++)
    {
        if(m.find(point[i].u) == m.end())
        {
            (*root) = new node(point[i].u);
            if(point[i].x == 'L')
            {
                (*root)->left = new node(point[i].v);
                m[point[i].v] = (*root)->left;
            }
            else 
            {
                (*root)->right = new node(point[i].v);
                m[point[i].v] = (*root)->right;
            }
            m[point[i].u] = (*root);
        }
        else
        {
            if(point[i].x == 'L')
            {
                m[point[i].u]->left = new node(point[i].v);
                m[point[i].v] = m[point[i].u]->left;
            }
            else
            {
 
                m[point[i].u]->right = new node(point[i].v);
                m[point[i].v] = m[point[i].u]->right;        
            }
        }
    }
}

void kt(node*root,int h,int &tong)
{
	if(root==NULL)return;
	if(root->left==NULL&&root->right==NULL&&h==1)
	{
		tong=tong+root->data;
		return;
	}
	kt(root->left,0,tong);
	kt(root->right,1,tong);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        point points[n] = {};
        node *root = NULL;
//        cout<<root<<" ";
        for(int i = 0; i < n; i++)
        {
            cin >> points[i].u >> points[i].v >> points[i].x;
        }
        AddNode(n, points, &root);
//        cout<<root->left<<endl;
//        cout << Caculate(root) << endl;
		int tong=0;
		kt(root,0,tong);
		cout<<tong<<endl;
    }
    return 0;
}
