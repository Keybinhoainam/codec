#include<bits/stdc++.h>
using namespace std;
struct test{
	int val,vt;
};
bool comp(test a,test b)
{
	if(a.val==b.val)return a.vt<b.vt;
	return a.val<b.val;
}
int main()
{
	int n;
	cin>>n;
	vector<test>a;
	test x;
	for(int i=0;i<n;i++)
	{
		cin>>x.val;
		x.vt=i;
		a.push_back(x);
		
	}
	sort(a.begin(),a.end(),comp);
	int tmp=1,ans=0;
	for(int i=1;i<n;i++)
	{
		if(a[i].vt>a[i-1].vt)tmp++;
		else
		{
			ans=max(ans,tmp);
			tmp=1;
		}
	}
	ans=max(ans,tmp);
	cout<<n-ans<<endl;
}

