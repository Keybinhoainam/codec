#include<bits/stdc++.h>
using namespace std;
long long n;
vector<string > tao(long long n)
{
	vector<string> t;
	for(long long i=1;i*i*i<=n;i++)
	{
		long long so=i*i*i;
		string tmp=to_string(so);
		t.push_back(tmp);
	}
	return t;
}
string kt2(vector<string>a ,string so)
{
	reverse(a.begin(),a.end());
	for(long long i=0;i<a.size();i++)
	{
		string tmp1=a[i];
		int vt=0;
		for(long long j=0;j<so.length();j++)
		{
			if(so[j]==tmp1[vt])
			{
				vt++;
			}
			if(vt==tmp1.length())return tmp1;
		}
	}
	return "-1";
}
string kt()
{
	vector<string>a(1000000);
	a=tao(n);
	string so=to_string(n);
	string kq= kt2(a,so);
	return kq;
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
		cout<<kt()<<endl;
	}
}

