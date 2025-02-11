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

void solution(int n, int m){

	ll somador = 0;

	for(int i = 0; i < n; i++)
	{
		int c_i; cin>>c_i;
		somador += c_i*(n-i);
	}

	ll ans = somador * m;
	cout<<ans<<endl;
}

int main(){
    _;
	
	int n,m; 
	while(cin>>n>>m)
	{
		if(n == -1 && m == -1)
			break;
		solution(n,m);
	}

    return 0;
}
