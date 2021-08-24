#include<bits/stdc++.h>
using namespace std;
#define ib ios_base::sync_with_stdio(0)
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ll long long
#define test() ib;int t;cin>>t;while(t--)
#define l() length()
#define sz() size()
#define el endl
#define pb(a) push_back(a)
#define reset(a) memset(a,0,sizeof(0))
#define ci cin
#define co cout

#define INF 0x3f3f3f3f

int main(){
	test(){
		int n,m,x,y;
		cin>>n>>m;
		int a[n+1][n+1];
	    FOR(i,1,n)
	    	FOR(j,1,n)
	    		a[i][j]=INF;
	
		FOR(i,1,n)
			a[i][i]=0;
				
		int u,v,w;
		FOR(i,1,m){
			cin>>u>>v;
			a[u][v]=1;
		}
		FOR(k,1,n)
	        FOR(i,1,n)
				FOR(j,1,n)
	                a[i][j]=min(a[i][j], a[i][k] + a[k][j]);
		
		ll res=0,k=0;	
		FOR(i,1,n){
			FOR(j,1,n){
//				cout<<a[i][j]<<" ";
				if(j!=i && a[i][j]!=INF){
					k+=1;
					res+=a[i][j];	
				}
			}
//			cout<<endl;
		}
//			cout<<res<<" "<<k<<endl;
		double h=(double)res/(double)k;
		cout << fixed << setprecision(2) << h << endl;
	}
}
