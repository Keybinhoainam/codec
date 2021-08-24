#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s[100000];
		cin>>s;
		vector<char>a;
		int sum=0;
		for(int i=0;i<strlen(s);)
		{
			if(s[i]=='[')
			{
				a.push_back(i);
				i++;
			}
			else
			{
				if(!a.empty())
				{
					a.pop_back();
					i++;
				}
				else
				{
					int j=i+1;
					while(j<strlen(s)&&s[j]==']')
					{
						j++;
					}
					swap(s[i],s[j]);
					sum+=(j-i);
					i+=2;
				}
			}
		}
		cout<<sum<<endl;
	}
}

