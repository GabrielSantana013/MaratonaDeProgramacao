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

void solution(int T){
	for(int  i = 0; i < T; i++){

		vector<pair<int,int>> presentes;

		int N, K;
		scanf("%d %d", &N,&K);
		
		
		for(int j = 0; j< N; j++)
		{
			int  I,H,W,L; scanf("%d %d %d %d",&I, &H,&W,&L);
			presentes.push_back({H*W*L, -I});

		}

		sort(presentes.begin(), presentes.end());
		
		vector<int> ids(K);
		for(int j = 0; j < K; j++) {
			ids[j] = -presentes.back().s;
			presentes.pop_back();
		}
		
		sort(ids.begin(),ids.end());

		for(int m = 0; m < ids.size(); m++) {
			if(m!=0) cout<< " ";
			cout<<ids[m];
		}
		cout<<endl;
	}

}


int main(){
    _;

    int T; scanf("%d",&T) ;
    solution(T);

    return 0;
}
