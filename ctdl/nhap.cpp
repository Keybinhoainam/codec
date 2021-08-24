#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define test() int t;cin>>t;while(t--)
#define l() length()
#define sz() size()
#define el endl
#define pb(a) push_back(a)
#define reset(a) memset(a,0,sizeof(0))

int n,m;
int b[100005];
int bfs(int v,vector <int> a[]) {
	int d = 0;
	queue <int> p;
	p.push(v);
	b[v]=1;
	while(!p.empty()) {
		int h = p.front(); p.pop();
		d++;
		//cout<<h<<" ";
		for(int i = 0;i< a[h].size();i++) {
			int v=a[h][i];
			if(b[v]==0){
				b[v]=1;
				p.push(v);
			}
		}
	}
	return d;	
}
int main() {
	char a = 177, b = 219;
	cout<<a<<endl<<b;
}
