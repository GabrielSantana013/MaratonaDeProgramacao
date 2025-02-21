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

const int MAX = 50;

int n,m;
vector<vector<char>> M(MAX, vector<char>(MAX));

vector<pair<int, int>> movs = {
		{1, 0},
		{0, 1},
		{-1, 0},
		{0, -1},
};

bool valida_pos(pair<int,int> pos){
	
	int i = pos.f, j = pos.s;
	return(i>=0 && j >=0 && i < n && j < m && M[i][j] == 'A');
}


void bfs(vector<pair<int,int>> fontes){

	queue<pair<int,int>> q;
	for(auto i : fontes)
		q.push(i);

	while(!q.empty()){
		pair<int,int> v = q.front();
		q.pop();
		for(auto u: movs){
			u.f += v.f, u.s += v.s;
			if(valida_pos(u)){
			
				q.push(u);
				M[u.f][u.s] = 'T';
				}
		}
	
	}

}


void solution(){

	while(true){
	    cin>>n>>m;
		if(n==0 and m ==0) break;

		vector<pair<int,int>> contamina;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> M[i][j];
				if(M[i][j] == 'T') contamina.emplace_back(i,j);
			}
		}

		bfs(contamina);

		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout<< M[i][j];
			cout<<endl;
		}
	cout<<endl;
	
	}

}


int main(){
    _;

	solution();

    return 0;
}
