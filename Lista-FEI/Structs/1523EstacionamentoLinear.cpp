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

	while(true){

		int n, k;
		cin>>n>>k;
		if(n == 0 and k ==0) break;

		vector<pair<int,int>> estacionamento, carros; //chegada e saida;

		for(int i = 0; i < n; i++){
		
			int ci,si; cin>>ci>>si;
			carros.emplace_back(ci, si);
		}

	
		bool liberado = true;
		for(int i = 0; i < n; i ++)
		{
			int ci = carros[i].f;
			int si = carros[i].s;

		
			for(int j = estacionamento.size()-1; j>=0; j--){

				if(ci >= estacionamento[j].f && ci < estacionamento[j].s && si > estacionamento[j].s){

					liberado = false;
					break;
				}
			}

			if(!liberado) break;

			while(!estacionamento.empty() && estacionamento.back().second <=ci)
			{
				estacionamento.pop_back();
			}
			estacionamento.emplace_back(ci,si);
			
			if(estacionamento.size()>k){liberado = false; break;}

		}

	
		//for(auto i: estacionamento)
		//	cout<<i.f<<" "<<i.s<<endl;


	if(liberado) cout<<"Sim"<<endl; else cout<<"Não"<<endl;

	}

}

int main(){
    _;

 	solution();

 return 0;
}
