#include<bits/stdc++.h>
using namespace std;
vector<string> a;
void kt()
{
	queue<string>q;
	q.push("9");
	int n=10005;
	while(n--)
	{
		string s1=q.front();
		q.pop();
		a.push_back(s1);
		string s2=s1;
		q.push(s1.append("0"));
		q.push(s2.append("9"));
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
		int i;
		for(i=0;i<=10000;i++)
		{
			if(stoll(a[i])%n==0)break;
		}
		cout<<a[i]<<endl;
	}
}

