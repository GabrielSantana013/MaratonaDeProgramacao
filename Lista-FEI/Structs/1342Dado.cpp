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


	while(true)
	{
		int players, quadrados; cin>>players>>quadrados;

		if(players==0 and quadrados==0) break;
	
		vector<pair<int,bool>> playersOrder(players, {0,false});
		vector<bool> armadilhas(quadrados,false);

	for(int i = 0; i < 3; i ++){
		int armadilha; cin>>armadilha;
		armadilhas[armadilha] = true;
	}

	int nRolagem; cin>>nRolagem;
	queue<int>movimentos;
	
	for(int i = 0; i < nRolagem; i++)
	{
		int d1,d2; cin>>d1>>d2;
		movimentos.push(d1+d2);
	}


	int i = 0;
	int winner;
	while(!movimentos.empty())
	{
		if(!playersOrder[i].s)
		{
			playersOrder[i].f += movimentos.front(); movimentos.pop();
			if(playersOrder[i].f > quadrados) {
				winner = i+1;
				}
		
			if(armadilhas[playersOrder[i].f])
				playersOrder[i].s = true;
		}
		else{
			
			playersOrder[i].s = false;
		}
		i++;
		if(i == players) 
			i = 0;
		
		}
		cout<<winner<<endl;
	}
}


int main(){
    _;

	solution();	
	
    return 0;
}
