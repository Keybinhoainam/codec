#include<bits/stdc++.h>
using namespace std;
int n;
struct dt{
	int s,e;
};
bool cmp(dt x,dt y)
{
//	if(x.e==y.e)return x.s<y.e;
	return x.e<y.e;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		int x1,x2;
		vector<dt>x;
		for(int i=0;i<n;i++)
		{
			cin>>x1>>x2;
			dt t;
			t.s=x1;
			t.e=x2;
			x.push_back(t);
		}
		sort(x.begin(),x.end(),cmp);
		int end=0,dem=0;
		for(int i=0;i<n;i++)
		{
			if(x[i].s<end)continue;
			else
			{
				dem++;
				end=x[i].e;
			}
		}
		cout<<dem<<endl;
	}
}

