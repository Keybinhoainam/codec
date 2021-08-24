#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	vector<int>a[100];
	string s;
	for(int i=1;i<=n;i++)
	{
		getline(cin,s);
		s+=" ";
		int so=0;
		for(int j=0;j<s.length();j++)
		{
			if(s[j]>='0'&&s[j]<='9')
			{
				so=so*10+(s[j]-'0');
			}
			else
			{
				if(so>0)
				{
					a[i].push_back(so);
					so=0;
					
				}
			}
		}
	}
	bool f[100][100];
	memset(f,1,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<a[i].size();j++)
		{
				if(f[i][a[i][j]])
				{
					cout<<i<<" "<<a[i][j]<<endl;
					f[a[i][j]][i]=0;
				}
		}
	}
}

