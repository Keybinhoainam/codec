#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int t1;
		cin>>t1;
		char s[1000];
		cin>>s;
		int i;
		for(i=strlen(s)-2;i>=0;i--)
		{
			if(s[i]<s[i+1])
			{
				int min1=i+1;
				for(int j=i+2;j<strlen(s);j++)
				{
					if(s[j]<s[min1]&&s[j]>s[i])min1=j;
				}
				swap(s[min1],s[i]);
				sort(s+i+1,s+strlen(s));
				break;
			}
		}
		if(i<0)cout<<t1<<" "<<"BIGGEST";
		else cout<<t1<<" "<<s;
		cout<<endl;
	}
}

