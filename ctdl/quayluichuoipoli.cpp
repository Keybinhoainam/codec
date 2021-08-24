#include<bits/stdc++.h>
using namespace std;
bool kt(string s,int i,int n)
{
	if(i==n/2-1&&s[i]==s[n-i-1])return 1;
	if(i<n/2-1&&s[i]==s[n-i-1])return kt(s,i+1,n);
	return 0;
}
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	if(kt(s,0,n)==1)cout<<"la chuoi palindrome";
	else cout<<" khong la chuoi palindrome";
}

