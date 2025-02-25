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

const int MAX = 100;


void solution(){
	
	vector<vector<char>> M(MAX, vector<char>(MAX));

	vector<vector<char>> visitados(MAX, vector<char>(MAX));

	map<char, pair<int,int>> movs = {

	
	{'<',{0,-1}}, // esquerda

	{'^' ,{-1,0}}, // cima

	{'v',{1,0}}, // baixo
	
	{'>',{0,1}}, // direita
	
	};


	int x,y; cin>>y>>x;

	
	for(int i = 0; i < x; i++)
		for(int j = 0; j < y; j++)
			cin>> M[i][j];


	bool valido = true;

	int i=0, j=0;
	char dir = M[i][j];

	while(movs.count(dir)){

	int ni = i + movs[dir].f;
	int nj = j + movs[dir].s;




	if(ni<0 || ni >= x || nj < 0 || nj >= y){
		
		valido = false;
		break;
	}




	i = ni;
	j = nj;

	if(M[i][j] != '.')
		if(M[i][j] == '*'){
				break;
			}

		else{
		dir = M[i][j];
		visitados[i][j] ++;

		if(visitados[i][j] > 1){
			
			valido = false;
			break;
			}

		}
	}


	valido ? cout<<'*'<<endl : cout<<"!"<<endl;


/*	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++)
			cout<<M[i][j];

	cout<<endl;
	}*/


}

int main(){
    _;


	solution();


    return 0;
}
