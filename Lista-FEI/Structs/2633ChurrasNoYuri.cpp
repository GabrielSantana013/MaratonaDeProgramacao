#include <iostream>
#include<vector>
#include<algorithm>

#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;

bool cmp(const pair<string,int> &a, const pair<string,int> &b)
{
    return a.s<b.s;
}

void solution(int n){

    vector<pair<string, int>> churras(n);

    for(int i = 0; i < n; i++)
    {
        string name; cin>>name;
        int validade; cin>>validade;
        churras[i] = make_pair(name, validade);
    }

    sort(churras.begin(), churras.end(), cmp);

     for (int i = 0; i < n; i++) {
        cout << churras[i].first;
        if (i != n - 1) 
            cout << " ";  
    }
    cout<<endl;
}


int main(){
    _;

    int n;
    while(cin>>n)
        solution(n);

    return 0;
}
