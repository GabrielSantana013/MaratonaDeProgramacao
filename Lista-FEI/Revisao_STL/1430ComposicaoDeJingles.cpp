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


	map<char,float> compassos;

	compassos.insert({'W', 1});
	compassos.insert({'H', 0.5});
	compassos.insert({'Q', 0.25});
	compassos.insert({'E',0.125});
	compassos.insert({'S',0.0625});
	compassos.insert({'T',0.03125});
	compassos.insert({'X',0.015625});


	
	string jingle;
	cin>>jingle;
	while(jingle != "*"){
	
		int res = 0;
		float contador;
		for(int i = 0; i < jingle.size(); i++)
		{
			if(jingle[i] != '/')
				contador += compassos[jingle[i]];
			else
				if(contador == 1)
				{
					res++;
				}
			contador = 0;
		}

		cout<<res<<endl;
		cin>>jingle;
	}
}


int main(){
    _;

    solution();

    return 0;
}
