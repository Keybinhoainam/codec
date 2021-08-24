#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int n,snt[]={2,3,5,7,11,13,17,19,23,27,29,31,37};
ll kq;
void kt(ll res,int i,ll uoc)
{
	
	if(uoc>n)return;
	if(uoc==n)
	{
		kq=min(res,kq);return;
	}
	for(ll j=1;;j++)
	{
		if(res*snt[i]>kq)break;
		res*=snt[i];
		kt(res,i+1,uoc*(j+1));
	}
}
int main()
{
	int T;
	cin>>T;
//	test();
	while(T--)
	{
		cin>>n;
		kq=pow(10,18);
		kt(1,0,1);
		cout<<kq<<endl;
	}
}

