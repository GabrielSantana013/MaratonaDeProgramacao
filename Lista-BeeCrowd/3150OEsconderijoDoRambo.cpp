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

	vector<int>grau(n);

	for(int i = 0; i < m; i++){
		int x; cin>>x;
		grau[x] ++;
		cin>>x;
		grau[x] ++;
	}


	bool perdido = false;
	for(auto i : grau)
		if(i%2!=0)
			perdido = true;

	perdido ? cout<<"Rambo esta perdido"<<endl : cout<<"Rambo esta salvo"<<endl;
}

int main(){
    _;

	solution();

    return 0;
}
