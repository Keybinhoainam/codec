#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		vector<string> a(1005);
		int dem=1;
		cin>>s;
		a.push_back(s);
		while(getchar()!='\n')
		{
			cin>>s;
			a.push_back(s);
			dem++;
		}
		for(int i=0;i<dem;i++)
		{
			cout<<a.back()<<" ";a.pop_back();
		}
		cout<<endl;
	}
}

