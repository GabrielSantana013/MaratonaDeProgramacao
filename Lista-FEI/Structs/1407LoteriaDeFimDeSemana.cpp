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

bool cmp(const pair<int,int>& a, const pair<int,int> &b){
	if(a.s ==b.s)
		return a.f<b.f;
	return a.s<b.s;
}

void solution(){

	while(true){

	int n,c,k;
	cin>>n>>c>>k;

	if(n == 0 and c == 0 and k == 0) break;

	vector<pair<int,int>> loteria(k, {0,0});

	for(int i = 0; i < k; i++)
		loteria[i].f = i+1;

	int nums = n*c;

	for(int i = 0; i < nums; i++)
	{
		int input; cin>>input;
		loteria[input-1].s++;
	}


	sort(loteria.begin(), loteria.end(), cmp);

	int menor = loteria[0].s;
	vector<int> res;

	for(int i = 0; i < k; i++)
	{
		if(loteria[i].s == menor)
			res.push_back(loteria[i].f);
	}

	for(int i = 0; i < (int)res.size(); i++)
		cout<<res[i]<<" \n"[i==(int)res.size()-1];
}
}



int main(){
    _;
	
	solution();

    return 0;
}
