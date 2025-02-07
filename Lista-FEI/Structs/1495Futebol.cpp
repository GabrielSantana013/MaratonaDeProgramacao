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

void solution(int n, int g){

	
	vector<pair<int,int>> partidas;
	vector<int> saldoGols;
	vector<int> indices;
	int pontos = 0;	

	for(int i =0; i<n; i++){
	
		int n1,n2; cin>>n1>>n2;
		partidas.push_back(make_pair(n1,n2));
	}

	for(int i = 0; i < partidas.size(); i++)
	{
		int saldoDeGols = partidas[i].f - partidas[i].s;
		if(saldoDeGols>0)
		{
			pontos +=3;
			continue;
		}
		
		saldoGols.push_back(saldoDeGols);
	}

	sort(saldoGols.rbegin(),saldoGols.rend());

	for(int i =0;i < saldoGols.size() && g>0; i++)
	{
		int n = saldoGols[i];
		while(g>0 && n<1)
		{
			g--;
			n++;
		}
		saldoGols[i] = n;
		
	}

	for(auto i: saldoGols)
		{
			if(i>0)
				pontos +=3;
			else if(i == 0)
				pontos +=1;
		}
	cout<<pontos<<endl;
}


int main(){
    _;

    	int n,g;

	while(cin>>n>>g)
		solution(n,g);

    return 0;
}
