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


	int n, m; cin>>n>>m;
	vector<vector<char>> M(n, vector<char>(m));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> M[i][j];
		}
	}
	
	vector<pair<int, int>> movs = {
		{1, 0},
		{0, 1},
		{-1, 0},
		{0, -1},
	};

//	// para lista de adj:
//		int u;
//		for (int v : g[u]) {
//			if (!visitado[v]);
//
//		}
//
//	// para matriz:
//		int i, j;
//		for (auto mov : movs) {
//			int ni = i + mov.f;	
//			int nj = j + mov.s;
//			
//			if (valido(ni, nj) and !visitado[ni][nj]);
//		}
}


int main(){
    _;

	solution();

    return 0;
}
