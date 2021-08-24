#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string,int>a;
	string s1;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		a[s1]++;
	}
	long long tong=0;
		tong+=4*a["Tetrahedron"];
		tong+=6*a["Cube"];
		tong+=8*a["Octahedron"];
		tong+=12*a["Dodecahedron"];
		tong+=20*a["Icosahedron"];
		cout<<tong<<endl;
	
}

