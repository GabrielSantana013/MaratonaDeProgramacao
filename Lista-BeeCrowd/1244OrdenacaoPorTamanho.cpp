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

bool cmp(const pair<string,int> &a, const pair<string,int> &b){

	if(a.f.size() == b.f.size())
		return a.s<b.s;
	return a.f.size()>b.f.size();
}


void solution(int n){


	for(int i = 0; i < n; i++){
		vector<pair<string,int>> palavras;
		string linha;
		string palavra;
		getline(cin, linha);	
		int pos = 0;

		stringstream ss(linha);

		while(ss>>palavra)
			palavras.emplace_back(palavra,pos++);


		stable_sort(palavras.begin(), palavras.end(), cmp);

			for(int j = 0; j < (int)palavras.size(); j++)
				cout<<palavras[j].first<<" \n"[j == (int)palavras.size()-1];

	}
	

}


int main(){
    //_;
	int n; cin>>n; cin.ignore();
	solution(n);
	

    return 0;
}
