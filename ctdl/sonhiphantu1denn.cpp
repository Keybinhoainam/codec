#include<bits/stdc++.h>
using namespace std;
vector<string> a;
void kt()
{
	queue<string>q;
	q.push("1");
	int n=10005;
	while(n--)
	{
		string s1=q.front();
		q.pop();
		a.push_back(s1);
		string s2=s1;
		q.push(s1.append("0"));
		q.push(s2.append("1"));
	}
}
int main()
{
	kt();
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		for(int i=0;i<n;i++)cout<<a[i]<<" ";
		cout<<endl;
	}
}

