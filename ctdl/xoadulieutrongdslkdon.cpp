#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,a[100000],i=1;
//	cin.ignore();
//	cin>>a[0];
//	while(getchar()!='\n')
//	{
//		cin>>a[i++];
//	}
	string s,so="";
	getline(cin,s);
	cin>>x;
	s=s+" ";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
			if(stoll(so)!=x)cout<<so<<" ";
			so="";
		}
		else
		{
			so=so+s[i];
		}
	}
//	for(int j=0;j<i;j++)
//	{
//		if(a[j]!=x)cout<<a[j]<<" ";
//	}
	cout<<endl;
	
}

