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
		string s1,s2;
		int dem=0;
		int tmp1[n],tmp2[n];
		cin>>s1>>s2;
		for(int i=0;i<n;i++)
		{
			if(s1[i]!=s2[i])
			{
				tmp1[dem]=s1[i];
				tmp2[dem]=s2[i];
				dem++;
			}
		}
		if(dem==2&&tmp1[0]==tmp1[1]&&tmp2[0]==tmp2[1])
		{
			cout<<"YES";
		}
		else cout<<"NO";
		cout<<endl;
	}
}

