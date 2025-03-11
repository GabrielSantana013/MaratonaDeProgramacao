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

	map<string, vector<string>> graph;
	map<string, int> distancia;
	int n, m;
	cin>>n>>m;

	for(int i = 0; i < m; i++){

		string u, v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u);
		distancia.emplace(u, -1);
		distancia.emplace(v, -1);
	}


	auto bfs = [&](string entrada, string saida){

		queue<string> q;
		q.push(entrada); distancia[entrada] = 0;
		for(auto &d: distancia) d.second = -1;
		
		while(!q.empty()){

			string x = q.front(); q.pop();
			if(x == saida) return distancia[x];
			
			for(auto i : graph[x]){
				
				if(distancia[i] == -1){

					distancia[i] = distancia[x]+1;
					q.push(i);
				}
			}
		}
	};

	int ans = bfs("Entrada", "*") + bfs("*", "Saida") + 2;
	cout<<ans<<endl;

}


int main(){
    _;

	solution();

    return 0;
}
