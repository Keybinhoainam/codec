#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		map<int,string>l1,l2;
		l1[0]="0";l1[1]="1";
		int i=1;
		while(i<n)
		{
			for(int j=pow(2,i)-1;j>=0;j--)
			{
				string s1=l1[j];
				l1[j]="0"+l1[j];
				l2[pow(2,i)-1-j]="1"+s1;
			}
			for(int j=pow(2,i);j<pow(2,i+1);j++)l1[j]=l2[j-pow(2,i)];
			i++;
		}
		for(int i=0;i<pow(2,n);i++)cout<<l1[i]<<" ";
		cout<<endl;
	}
}
