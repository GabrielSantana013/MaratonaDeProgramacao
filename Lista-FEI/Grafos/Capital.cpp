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


bool cmp(int a, int b){

	return a<b;
}


bool solution(){


	vector<int> areas;
	for(int i = 0; i < 4; i++){
		int num; cin>>num;
		areas.push_back(num);
	}
	
	sort(areas.begin(), areas.end());

	return areas[0]*areas[3] == areas[1]*areas[2];
}


int main(){
	_;
   
	bool stat = solution();
	if(stat)
		cout<<"S"<<endl;
	else
		cout<<"N"<<endl;

	 return 0;
}
