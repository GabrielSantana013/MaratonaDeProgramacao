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

	int n1,n2;
	stack<int>apostas;

	while(cin>>n1>>n2){

	int res = gcd(n1,n2);

	res>5 ? cout<<"Noel"<<endl : cout<<"Gnomos"<<endl;
	apostas.push(res);
	}

	while(!apostas.empty()){

	cout<< apostas.top()<<" ";
	apostas.pop();
	}

}

int main(){
   // _;
	
	solution();

    return 0;
}

