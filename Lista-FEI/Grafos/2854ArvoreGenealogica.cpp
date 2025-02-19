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

void solution(int n, int m){


	map<string, int> M;
	vector<bool> visitados(n, false);
	vector<vector<int>> graph(n);

	for(int i = 0; i < m; i ++){
	
		string n1; cin>>n1;
		string n2; cin>>n2>>n2;

		int u, v;
		if (!M.count(n1)) M[n1] = M.size();
		u = M[n1];

		if (!M.count(n2)) M[n2] = M.size();
		v = M[n2];


		graph[u].push_back(v);
		graph[v].push_back(u);
	}


	function<void(int)> dfs = [&](int nodo){

		visitados[nodo] = true;
		for (int v : graph[nodo]) {
			if(!visitados[v]){
				dfs(v);
				
			}
		}

	};

	
	int res = 0;
	for(int  i = 0; i < n; i ++){
		
		if(!visitados[i])
		{
			dfs(i);
			res++;
		}

	}

	res>1 ? cout<<"0"<<endl : cout<<"1"<<endl;

}


int main(){
    _;

	int n, m; cin>>n>>m;
	solution(n,m);



    return 0;
}
