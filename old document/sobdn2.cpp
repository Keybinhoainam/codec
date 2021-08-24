#include<bits/stdc++.h>
using namespace std;
//vector<string>bdn;
long long n;
void kt()
{
	queue<string>s;
	s.push("1");
	while(1)
	{
		string s1=s.front();
		if(stoll(s1)%n==0)break;
		s.pop();
//		bdn.push_back(s1);
		string s2=s1;
		s.push(s1.append("0"));
		s.push(s2.append("1"));
	}
	cout<<s.front()<<endl;
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		cin>>n;
//		int i;
//		for(i=0;i<pow(10,5);i++)
//		{
//			if(stoll(bdn[i])%n==0)break;
//		}
//		cout<<bdn[i]<<endl;
		kt();
	}
}

