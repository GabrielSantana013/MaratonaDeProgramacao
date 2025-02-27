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

const int MAX = 8;
vector<vector<int>> vis(MAX, vector<int>(MAX, 0));
vector<vector<int>> dist(MAX, vector<int>(MAX, -1));


int valida_pos(pair<int,int> mov){
		
	int i =(int) mov.f, j = (int)mov.s;
	return(i >=0 && j >=0 && i < 8 && j < 8 && (!vis[i][j]));
}


void solution(){

	vector<pair<int,int>> movs = {
		{2,  1}, //2 baixo 1 direita
		{2, -1}, //2 baixo 1 esquerda
		{1,  2}, //1 baixo 2 direita
		{1, -2}, //1 baixo 2 esquerda
		{-2, 1}, //2 cima 1 direita
		{-2,-1}, //2 cima 1 esquerda
		{-1, 2}, //1 cima 2 direita
		{-1,-2}, //1 cima 2 esquerda

	};
	

	char c1,c2;
	int b1,b2;

	while(cin>>c1>>b1>>c2>>b2){
	
		fill(vis.begin(), vis.end(), vector<int>(MAX, 0));
		fill(dist.begin(), dist.end(), vector<int>(MAX, -1));

		pair<int,int> inicio = {(int)c1-'a', b1-1};
		pair<int,int> fim = {(int) c2-'a', b2-1};

		auto bfs = [&](pair<int,int> inicio, pair<int,int> fim){

			queue<pair<int,int>> q;
			q.push(inicio);

			vis[inicio.f][inicio.s] = 1;
			dist[inicio.f][inicio.s] = 0;

			while(!q.empty()){

				pair<int,int> u = q.front();
				q.pop();


				if(u == fim){return dist[u.f][u.s];}
				for(auto v: movs)
				{
					v.f += u.f; v.s += u.s;
					
					if(valida_pos(v)){
					
						q.push(v);
						vis[v.f][v.s] = 1;
						dist[v.f][v.s] = 1 + dist[u.f][u.s];
					}

				}

			}

			return -5;

		};
	
		int distancia = bfs(inicio, fim);
		cout<<"To get from "<< c1<<b1 <<" to "<< c2<<b2<<" takes "<<distancia <<" knight moves.\n";

	}
}

int main(){
    _;

	solution();

    return 0;
}
