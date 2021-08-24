#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;cin>>T;
	while(T--)
	{
		long long dem=1;
//		vector<string> a(1005);
		string s;
		cin>>s;
//		a.push_back(s);
		while(getchar()!='\n')
		{
			cin>>s;
//			a.push_back(s);
			dem++;
		}
		cout<<dem<<endl;
	}
}

