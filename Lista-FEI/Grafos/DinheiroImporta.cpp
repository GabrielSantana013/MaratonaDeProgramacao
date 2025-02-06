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
		int n, cin>>n;
		values.push_back(n);
	}
	
	for(int i = 0; i < n; i++)
	{
		int u, v; cin>>u>>v;
		graph[u].push_back(v);
		graph(v).push_back(u);
	}

}


int main(){
    _;

	int n,m; cin>>n>>m;
	bool stats = solution(n,m);



    return 0;
}
