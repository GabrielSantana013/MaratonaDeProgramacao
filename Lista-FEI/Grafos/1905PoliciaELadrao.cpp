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

vector<vector<int>> cam(5, vector<int>(5));

bool valida_pos(pair<int,int> pos, vector<vector<bool>> & visited){

	int i = pos.f, j = pos.s;
	return (i>=0 && j>=0 && i< 5 && j< 5 && cam[i][j] == 0 && !visited[i][j]);
}


void solution(){

	vector<pair<int,int>> movs = {

		{1,0}, //baixo
		{0,1}, //direita
		{-1,0}, //cima
		{0,-1}, //esquerda
	};

	auto bfs = [&](pair<int,int> inicio){

		queue<pair<int,int>> q;
		vector<vector<bool>> visited(5, vector<bool>(5, false));

		q.push(inicio);
		while(!q.empty()){

			pair<int,int> v = q.front();
			q.pop();
			
				for(auto u: movs){
					u.f += v.f, u.s += v.s;
					if(valida_pos(u, visited)){
						visited[u.f][u.s] = true;
						q.push(u);
						}
				}
			}
		return visited[4][4];
	};

	int t; cin>>t;

	for(int k = 0; k < t; k++){

	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++){
			cin>>cam[i][j];
		}

		if(bfs({0,0}))
			cout<<"COOPS"<<endl;
		else
				cout<<"ROBBERS"<<endl;
	
	}	

}


int main(){
    _;

	solution();

    return 0;
}
