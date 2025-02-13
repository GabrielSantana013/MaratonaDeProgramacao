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

		vector<pair<int,int>> estacionamento; //chegada e saida;
		
		for(int i = 0; i < n; i++){
		
			int ci,si; cin>>ci>>si;
			estacionamento.emplace_back(ci, si);
		}

	}

}

int main(){
    _;

 	solution();

 return 0;
}
