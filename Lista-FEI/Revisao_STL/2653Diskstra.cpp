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

	set<string> joias;
	string input;

	while(cin>>input){
	
		joias.insert(input);

	}
	cout<<joias.size()<<endl;

}


int main(){
    _;

	
    solution();


    return 0;
}
