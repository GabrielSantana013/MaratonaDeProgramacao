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

int counter = 0;

int fibo(int n){
	counter++;
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	return fibo(n-1) + fibo(n-2);

}

void solution(){
	int X; cin>>X;
	int result = fibo(X);
	cout<< "fib("<<X<<") = "<<-- counter<<" calls = "<<result<<endl;
	counter = 0;
}

int main(){
    _;
	int n; cin>>n;
	for(int i = 0; i < n; i++)
		solution();

    return 0;
}
