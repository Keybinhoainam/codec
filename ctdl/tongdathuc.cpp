#include<bits/stdc++.h>
using namespace std;
int nmax,nmin;

void xuly1(string s1,int a[])
{
	int gt1,gt2;
		string s;
		int j=0;
		while(j<s1.length())
		{
			s="";
			while(s1[j]!='*'&&j<s1.length())
			{
				s+=s1[j];
				j++;
			}
			if(!s.empty())gt1=(!s.empty())?stoi(s):0;
			while(s1[j]!='^')j++;
			j++;
			s="";
			while(s1[j]!='+'&&j<s1.length())
			{
				s+=s1[j];
				j++;
			}
			gt2=(!s.empty())?stoi(s):0;
			nmax=max(nmax,gt2);
			nmin=min(nmin,gt2);
			a[gt2]=gt1;
			j++;
		}
}
void xuly2(string s1,int a[])
{
	int gt1,gt2;
		string s;
		int j=0;
		while(j<s1.length())
		{
			s="";
			while(s1[j]!='*'&&j<s1.length())
			{
				s+=s1[j];
				j++;
			}
			if(!s.empty())gt1=(!s.empty())?stoi(s):0;
			while(s1[j]!='^')j++;
			j++;
			s="";
			while(s1[j]!='+'&&j<s1.length())
			{
				s+=s1[j];
				j++;
			}
			gt2=(!s.empty())?stoi(s):0;
			nmax=max(nmax,gt2);
			nmin=min(nmin,gt2);
			a[gt2]+=gt1;
			j++;
		}
}
int main()
{
	int T;
	cin>>T;
	cin.ignore();
	while(T--)
	{
		int a[10001];
		memset(a,0,sizeof(a));
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		nmax=0;
		nmin=INT_MAX;
		xuly1(s1,a);
		xuly2(s2,a);
		for(int i=nmax;i>=0;i--)
		{
			if(a[i]>0)
			{
				cout<<a[i]<<"*x^"<<i;
				if(i>nmin)cout<<" + ";
			}
		}
		cout<<endl;
	}
	
}
/*
1
3*x^8 + 7*x^2 + 4*x^0
11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
*/
