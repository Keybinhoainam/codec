#include <bits/stdc++.h>
#define ll long long
#define FOR(i, a, b) for (ll i = a; i <= b; i++)
#define FORD(i, a, b) for(ll i = a; i >= b; i--)
#define pq(x) priority_queue<x>
#define vec(x) vector<x>
#define Matrix(x) vector<vec(x)>
#define SORT(x) sort(x.begin(), x.end())
#define SORTD(x, y) sort(x.begin(), x.end(), greater<y>)
#define Unique(x) x.erase(unique(x.begin(), x.end()), x.end())
#define SORTC(x, y) sort(x.begin(), x.end(), y)
#define faster() ios_base::sync_with_stdio(), cin.tie(0), cout.tie(0)
#define printVector(x) FOR(i, 0, x.size() - 1) cout << x[i] << ' '
#define getVector(x) FOR(i, 0, x.size() - 1) cin >> x[i]
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define p(x, y) pair<x, y>
#define all(x) x.begin(), x.end()
#define revrs(x) reverse(all(x))
#define reverse_pq(x) priority_queue<x, vec(x), greater<x> >
using namespace std;
map<ll, ll> Nodes;
map<ll, ll>::iterator it;
class Node
{
	ll index = -1;
	ll data = -1;
	Node *l = NULL;
	Node *r = NULL;
	Node *par = NULL;
	public:
		Node()
		{
			
		}
		void putIndex()
		{
			ll i = Nodes.size();
			index = i;
			Nodes[index] = data;
		}
		ll getIndex()
		{
			return index;
		}
		ll getData()
		{
			return data;
		}
		ll search(ll data1)
		{
			for (it = Nodes.begin(); it != Nodes.end(); ++it)
			{
				if (it->s == data1) return it->f;
			}
		}
		void putData(ll x)
		{
			data = x;
		}
		void connLeft(Node *a)
		{
			this->l = a;
		}
		void connRight(Node *a)
		{
			this->r = a;
		}
		void connRoot(Node *a)
		{
			this->par = a;
		}
};
map<ll, ll> M;
ll a, b;
Matrix(ll) C;
Matrix(ll) routes;
vec(ll) pre(35);
map<p(ll, ll), ll> VST;
void dfs(ll a, ll p)
{
	pre[a] = p;
	if (a == 2)
	{
		vec(ll) K;
		K.pb(a);
		while (pre[a] != 1)
		{
			a = pre[a];
			K.pb(a);
		}
		K.pb(1);
		revrs(K);
//		printVector(K);
//		cout << '\n';
		routes.pb(K);
	}
//	cout << endl << endl << a << ' ' << p << endl << endl;
	FOR(i, 0, C[a].size() - 1)
	{
		if (C[a][i] == p) continue;
		if (VST[{C[a][i], a}]) continue;
		if (VST[{a, C[a][i]}]) continue;
		VST[{C[a][i], a}] = 1;
		VST[{a, C[a][i]}] = 1;
		dfs(C[a][i], a);
		VST[{C[a][i], a}] = 0;
		VST[{a, C[a][i]}] = 0;
	}
}
bool notValid(vec(ll) A, vec(ll) B)
{
	FOR(i, 0, A.size() - 2)
	{
		FOR(j, 0, B.size() - 2)
		{
			if (A[i] == B[j] && A[i + 1] == B[j + 1]) return false;
		}
	}
	return true;
}
void Process()
{
	cin >> a >> b;
	M.clear();
	C.clear();
	C.resize(a + 1);
	VST.clear();
	FOR(i, 0, 34) pre[i] = -1;
	routes.clear();
	FOR(i, 0, b - 1)
	{
		ll x, y;
		cin >> x >> y;
		C[x].pb(y);
		C[y].pb(x);
	}
	routes.clear();
	dfs(1, -1);
	SORT(routes);
	Unique(routes);
	ll MN = 1e9;
//	cout << routes.size() << endl;
	FOR(i, 0, routes.size() - 1)
	{
		FOR(j, i + 1, routes.size() - 1)
		{
			if (notValid(routes[i], routes[j])) continue;
			MN = min(MN, (ll)(routes[i].size() + routes[j].size()));
		}
	}
	cout << MN << endl;
}
int main()
{
	faster();
	ll N = 1;
	cin >> N;
	while(N--) Process();
}
// Yeu gai su pham
