#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORN(i,a,b) for(int i=(a);i>=(b);i--)
#define INF 0x3f3f3f3f

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    t=1;
    while(t--){
    	int n,m;
    	cin>>n>>m;
    	int a[n+1][m+1];
    	FOR(i,1,n)
    		FOR(j,1,n)
    			a[i][j]=INF;
    			
    	FOR(i,1,n) a[i][i]=0;
    	
    	int u,v,w;
    	FOR(i,1,m){
    		cin>>u>>v>>w;
    		a[u][v]=a[v][u]=w;
		}
		
		FOR(k,1,n){
			FOR(i,1,n){
				FOR(j,1,n){
					a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
				}
			}
		}
		
		int Q;
		cin>>Q;
		int x,y;
		while(Q--){
			cin>>x>>y;
			cout<<a[x][y]<<endl;
		}
	}
	return 0;
}
