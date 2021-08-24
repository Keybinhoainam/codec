#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int x[20];

void out(string kq[],int dem)
{
	stack<int>a;
	int t=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(')
		{
			if(x[t]==0)kq[dem]+=s[i];
			a.push(t++);
		}
		else
		{
			if(s[i]==')')
			{
				if(x[a.top()]==0)kq[dem]+=s[i];
				a.pop();
			}
			else kq[dem]+=s[i];
		}
	}
}
void sinh(int i,string kq[],int &dem)
{
	for(int j=0;j<=1;j++)
	{
		x[i]=j;
		if(i==n-1)
		{
				out(kq,dem);
				dem++;
		}
		else sinh(i+1,kq,dem);
	}
}
int main()
{

		cin>>s;
		n=0;//n la so cap ngoac
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(')n++;
		}
		string kq[10000];
		int dem=0;
		sinh(0,kq,dem);
		sort(kq,kq+dem);
		for(int i=1;i<dem;i++)//i=0 la chuoi input nen khong in ra
		{
			if(kq[i]!=kq[i-1])cout<<kq[i]<<endl;
		}
	
}

