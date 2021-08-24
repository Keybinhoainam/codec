#include<bits/stdc++.h>
using namespace std;
long long x;
bool myfunction(int i,int j){
	return abs(x-i)<abs(x-j);
}
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long n,u;
		vector<long long> a;
		vector<long long>::iterator it;
		cin>>n>>x;
		for(int i=0;i<n;i++)
		{
			cin>>u;
			a.push_back(u);
		}
		sort(a.begin(),a.end(),myfunction);
		for(it=a.begin();it!=a.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}

