#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int s,d;
		cin>>s>>d;
		string so="";
		while(d>1)
		{
			int i=9;
			while(i>=s&&i>0)i--;
			s-=i;
			so=(char)(i+'0')+so;
			d--;
		}
		if(s>=1&&s<=9){
			so=(char)(s+'0')+so;
			cout<<so;
		}
		else cout<<-1;
		cout<<endl;
	}
}

