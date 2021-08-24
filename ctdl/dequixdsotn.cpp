#include<bits/stdc++.h>
using namespace std;
int kt(int n,int dem)
{
	if(n==0)return dem;
	return kt(n/10,dem+1);
}
int main()
{
	int n;
	cin>>n;
	if(n==0)cout<<1;
	else cout<<kt(n,0);
}

