#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	vector<int>a;
	while(cin>>s)
	{
		if(s=="push")
		{
			cin>>n;
			a.push_back(n);
		}
		if(s=="pop")
		{
			a.pop_back();
		}
		if(s=="show")
		{
			
			if(a.empty())cout<<"empty";
			else
			{
				for(int i=0;i<a.size();i++)cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	
}

