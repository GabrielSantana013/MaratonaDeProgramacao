#include <iostream>
#include <vector>
#include <algorithm>


#define f first
#define s second
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(x) cout << #x << " = " << x << endl
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;

bool cmp(const pair<string,int> &a, const pair<string, int> &b){
    if(a.s == b.s)
        return a.f < b.f;
    else
        return a.s > b.s;
}



void solution(int n){

    int teams = n/3;

    vector<pair<string, int>> input(n); 

    for(int i=0; i<n; i++){

        string name; cin>>name;
        int age; cin>>age;
        input[i] = (make_pair(name, age));
    }

    sort(input.begin(), input.end(), cmp);
    


    for(int i = 0; i < teams; i++)
    {
        cout<<"Time "<<i+1<<endl;
        int start = i;
        
        for(int j = 0; j < 3; j++)
        {
            cout<<input[start].f<<" "<<input[start].s<<endl;
            start+=teams;
        }
        cout<<endl;
    }
}


int main(){
    _;

    int n;
    cin>>n;

    solution(n);


    return 0;
}
