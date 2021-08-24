#include<bits/stdc++.h>
using namespace std;
long long n,dem;
//char a[100];
//map<long long,string>a;
//void kt()
//{
//	queue<string>q;
//	q.push("1");
//	long long t=0;
//	while(stoull(q.front())<=n)
//	{
//		string s1=q.front();
//		q.pop();
//			string s2=s1;
//			dem++;
////			a[t++]=s1;
//		q.push(s1.append("0"));
//		q.push(s2.append("1"));
//	}
//}
long long kt(string s)
{
	
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]>'1')
		{
			return pow(2,n);
		}
		else
		{
			if(s[i]=='1')
			{
				string s2=s.erase(0,1);
				if(n>1)return pow(2,n-1)+kt(s2);
				else return 1;
			}
			else 
			{
				string s2=s.erase(0,1);
				if(n>1)return kt(s2);
				else return 0;
			}
		}
	}
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string s;
		//long long n;
		cin>>s;
		for(int i=0;i<s.size();i++){
			if((s[i]-'0')>=2){
				for(int j=i;j<s.size();j++){
					s[j]='1';
				}
			}
		}
		dem=0;
//		n=s.length();
//		kt(s);
		cout<<kt(s)<<endl;
	}
}
