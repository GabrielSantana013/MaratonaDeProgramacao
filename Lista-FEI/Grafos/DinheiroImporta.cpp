#include <bits/stdc++.h>
#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;

bool solution(int n, int m){

	vector<vector<int>> graph(n);
	vector<bool> visited(n, false);
	
	
	vector<int>values(n);

	for(int i = 0; i < values.size(); i++)
	{
		int n; cin>>n;
		values[i] = n;
	}
	
	for(int i = 0; i < m; i++)
	{
		int u, v; cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	ll total = 0;

	function<void(int)> dfs = [&](int nodo)
	{
		total += values[nodo];	
		visited[nodo] = true;

		for(auto v: graph[nodo]){
		if(!visited[v]){dfs(v);}
		}
	};

	
	bool paga = true;
	for(int i = 0; i < n and paga; i++){
		
		if(!visited[i]){
			dfs(i);
			paga &= total ==0;
		};
	}
	
	return paga;
}


int main(){
    _;

	int n,m; cin>>n>>m;
	bool res = solution(n,m);
	cout<< (res ? "POSSIBLE" : "IMPOSSIBLE")<<endl;
	

	
    return 0;
}
