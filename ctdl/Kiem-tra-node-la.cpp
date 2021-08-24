#include<bits/stdc++.h>
using namespace std;
int n;

struct node{
	int data;
	node *left,*right;
	node( int x ){
		data=x;
		left = right = NULL;
	}
};

void makenode( node *root , int v ,  char x ){
	if( x=='L' )
		root->left = new node(v);
	else
		root->right = new node(v);
}

void insert( node *root , int u , int v , char x ){
	if( root==NULL ) return;
	if( root->data==u )
		makenode(root,v,x);
	else{
		insert(root->left,u,v,x);
		insert(root->right,u,v,x);
	}
}

int height( node *root ){
	if( root==NULL ) return 0;
	return 1 + max( height(root->left) , height(root->right) );
}

bool test( node *root , int level , int h ){
	if( root==NULL ) return true;
	if( root->left==NULL && root->right==NULL && level!=h ) return false;
	return test(root->left,1+level,h ) && test(root->right,1+level,h);
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		node *root=NULL;
		while(n--){
			int u,v; char x;
			cin>>u>>v>>x;
			if( root==NULL ){
				root = new node(u);
				makenode(root,v,x);
			}
			else
				insert(root,u,v,x);
		}
		int h=height(root);
		if( test(root,1,h) ) cout<<1;
		else cout<<0;
		cout<<endl;
	}
}
