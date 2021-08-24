#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
#define INF 0x3f3f3f3f
void Dijkstra(vector<pair<int,int> > adj[], int V, int src)
{
	priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
	vector<int> dist(V, INF);
	pq.push(make_pair(0, src));
	dist[src] = 0;
	while (!pq.empty()){
		int u = pq.top().second;
		pq.pop();
		for (int i=0;i<adj[u].size();i++){
			int v = adj[u][i].first;
			int weight = adj[u][i].second;
			if (dist[v] > dist[u] + weight){
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	for (int i = 1; i < V; ++i)
		cout<<dist[i]<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int V,m,star;
	    cin>>V>>m>>star;
	    vector<iPair > adj[V+1];
	    for(int i=0;i<V;i++) adj[i].clear();
		int u,v,w;
		for(int i=1;i<=m;i++){
			cin>>u>>v>>w;
			adj[u].push_back(make_pair(v, w));
			adj[v].push_back(make_pair(u, w));
		}
    	Dijkstra(adj,V+1,star);
    	cout<<endl;
	}
}
