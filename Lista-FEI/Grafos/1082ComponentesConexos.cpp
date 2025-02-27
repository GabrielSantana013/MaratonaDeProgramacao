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

const int MAX = 26;


void solution(){

	int t; cin>>t;

	vector<vector<int>> graph(MAX);
	vector<bool> vis(MAX, false);
	vector<char> componentesJuntos(MAX);

	for(int o = 0; o < t; o++){

	graph.assign(MAX, vector<int>());
	vis.assign(MAX, false);
	componentesJuntos.clear();

	int n, m; cin>>n>>m;

	for(int i = 0; i < m; i ++){


		char c1,c2; cin>>c1>>c2;
		int u = (int)c1-'a';
		int v = (int)c2-'a';

		graph[u].push_back(v);
		graph[v].push_back(u);
	
	}


		function<void(int)> dfs = [&](int nodo){
			componentesJuntos.push_back((char) nodo + 'a');
			vis[nodo] = true;
			for(auto v : graph[nodo]){
				if(!vis[v])
					dfs(v);
			}
		};

		
		cout<<"Case #"<<o+1<<":"<<endl;

		int comp_conexos = 0;
		for(int i = 0; i < n; i ++){
			if(!vis[i]){
				dfs(i);
				comp_conexos++;

				sort(componentesJuntos.begin(), componentesJuntos.end());
				for(auto k: componentesJuntos)
					cout<< k<<",";
				cout<<endl;
				componentesJuntos.clear();

			}
		}
			cout<<comp_conexos<<" connected components"<<endl<<endl;
			
	}


}



int main(){
    _;

	solution();

    return 0;
}
