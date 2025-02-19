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

void solution(){

	while(true){

		int n, m; cin>>n>>m;
	
		if(!n and !m) break;

		vector<bool> visitados(n, false);
		vector<vector<int>> graph(n);
				
		for(int i = 0; i < m; i++){
		
			int u,w ,v; cin>>u>>v>>w;
			u--, v--;
		
			if(--w){

			graph[u].push_back(v);
			graph[v].push_back(u);

			}
			else{

			graph[u].push_back(v);

			}

		}

		function<void(int)> dfs = [&](int nodo){
	
			visitados[nodo] = true;
			for(auto v: graph[nodo])
				if(!visitados[v])
					dfs(v);
		};

	

		bool possivel = true;
		for(int i = 0; i < n; i++){

			fill(visitados.begin(), visitados.end(), false);
				dfs(i);
				for(auto i: visitados){
					if(!i){
						possivel = false;
						break;
				}
			}


		}
		possivel ? cout<<"1"<<endl : cout<<"0"<<endl; 
	}
}


int main(){
    _;

	solution();

    return 0;
}
