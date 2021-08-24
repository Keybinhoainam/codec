#include<bits/stdc++.h>
using namespace std;
char s[100005];
int main()
{
	int T;cin>>T;
	while(T--)
 	{
 		long long check=0,i,j,vtm;
 		char chmax;
		cin>>s;
		i=strlen(s)-1;
		while(s[i]>=s[i-1]&&i>0)i--;
		if(i>0)
		{
			chmax=s[i];
			vtm=i;
//			cout<<i<<" "<<s[i]<<" "<<s[i-1]<<" ";
			for(j=i+1;j<strlen(s);j++)
			{
				if(chmax<s[j]&&s[j]<s[i-1])
				{
					chmax=s[j];
					vtm=j;
				}
			}
			swap(s[i-1],s[vtm]);
			check=1;
		}
		if(check==1)cout<<s;
		else cout<<-1;
		cout<<endl;

	}
}
