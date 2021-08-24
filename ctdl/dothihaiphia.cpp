#include<bits/stdc++.h>
using namespace std;
#define ib ios_base::sync_with_stdio(0)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define test() int t;cin>>t;while(t--)
#define l() length()
#define sz() size()
#define el endl
#define pb(a) push_back(a)
#define reset(a) memset(a,0,sizeof(0))
#define ci cin
#define co cout

int n,m;
int a[1005][1005];
int color[1005];
bool bfs(int start) {
	color[start]=1;
	
	queue <int> p;
	p.push(start);
	while(!p.empty()) {
		int u = p.front(); p.pop();
			
		if(a[u][u]==1) return false;
		
		FOR(v,1,n){
			if(a[u][v] && color[v]==-1){
				color[v]=1-color[u];
				p.push(v);
			}
			else if(a[u][v] && color[v]==color[u])
				return false;
		}
	}
	return true;	
}

int main(){
	test(){
		cin>>n>>m;
		FOR(i,1,n) color[i]=-1;
		FOR(i,1,n)
			FOR(j,1,n) a[i][j]=0;
		
		int x,y;
		FOR(i,1,m){
			ci>>x>>y;
			a[x][y]=a[y][x]=1;
		}
		
		bool ok=true;
		FOR(i,1,n){
			if(color[i]==-1){
				if(bfs(i)==false){
					ok=false;
					break;
				}
			}
		}
		
		if(ok) cout<<"YES";
		else cout<<"NO";		
		cout<<el;
	}
	return 0;
}
