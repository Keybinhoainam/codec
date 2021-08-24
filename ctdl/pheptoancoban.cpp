#include<bits/stdc++.h>
using namespace std;
int check;

int tinh(int a,int b,string c)
{
	if(c[0]=='+')return a+b;
	if(c[0]=='-')return a-b;
	if(c[0]=='*')return a*b;
	if(c[0]=='/'&&a%b==0)return a/b;
	return -1;
}
void kt(int dem,string s[10])
{
	if(check==1)return;
	if(dem==0)
	{
//		for(int i=0;i<5;i++)
//		{
//			cout<<s[i]<<" ";
//		}
//		cout<<endl;
		int so[100];
		for(int i=0;i<=4;i+=2)
		{
			so[i]=stoi(s[i]);
		}
		int tmp=tinh(so[0],so[2],s[1]);
//		cout<<tmp<<"\t"<<so[4]<<endl;
		if(tmp==so[4])
		{
			check=1;
			cout<<so[0]<<" "<<s[1]<<" "<<so[2]<<" "<<"= "<<so[4];
			return;
		}
		return;
	}
//	int c=0;
	for(int i=0;i<5;i++)
	{
//		string tmp1=s[i];.
//		cout<<i<<" "<<tmp1.length()<<" "<<tmp1.find('?')<<endl;
		if(s[i].length()==2&&s[i].find('?')!=string::npos)
		{
//			cout<<i<<endl;
//			c=1;
			for(int j=0;j<2;j++)
			{
				if(s[i][j]=='?')
				{
					int bd=(j==0)?1:0;
					for(int k=bd;k<=9;k++)
					{
						
						s[i][j]=(char)(k+'0');
						kt(dem-1,s);
//						cout<<k<<endl;
//						s[i][j]='?';
					}
					s[i][j]='?';
					break;
				}
			}
		}
		else
		{
			if(s[i].length()==1&&s[i].find('?')!=string::npos)
			{
//				cout<<i<<endl;
//				c=1;
				for(int j=0;j<4;j++)
				{
					if(j==0)s[i][0]='+';
					if(j==1)s[i][0]='-';
					if(j==2)s[i][0]='*';
					if(j==3)s[i][0]='/';
					kt(dem-1,s);
//					s[i][0]='?';
				}
				s[i][0]='?';
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL),cout.tie(NULL);
	int T;
	cin>>T;
	while(T--)
	{
		int dem=0;
//		char s[5][2];
string s[10];
		for(int i=0;i<5;i++)
		{
			cin>>s[i];
			for(int j=0;j<s[i].length();j++)
			{
				if(s[i][j]=='?')dem++;
			}
		}
		
//		cin>>s[0]>>s[3]>>s[1]>>s[4]>>s[2];
		check=0;
		kt(dem,s);
		if(check==0)cout<<"WRONG PROBLEM!";
		cout<<endl;
		
	}
}

