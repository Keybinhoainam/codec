#include<bits/stdc++.h>
using namespace std;
void xuly(string s,int j,map<int,bool>a[10005])
{
//	cout<<"Oj  ";
	s=s+" ";
	string tmp="";
	int t;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			if(tmp!="")
			{
				t=stoi(tmp);
			a[j][t]=1;
			tmp="";
			}
		}
		else
		{
			tmp=tmp+s[i];
		}
	}
}
int main()
{
//	cout<<"Ok ";
	int n;
	cin>>n;
	cin.ignore();
	string s;
	map<int,bool>a[10005];
//	cout<<"Ok ";
	for(int i=1;i<=n;i++)
	{
		getline(cin,s);
		xuly(s,i,a);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

