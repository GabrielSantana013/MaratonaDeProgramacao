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


void solution(int n){

	vector<int> nums, pares, impares;
	
	for(int i = 0; i <n; i++)
	{
		int k; cin>>k;
		nums.push_back(k);
	}

	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] %2 ==0)
			pares.push_back(nums[i]);
		else
			impares.push_back(nums[i]);
	}

	sort(pares.begin(), pares.end());
	sort(impares.rbegin(), impares.rend());

	for(int i = 0; i < pares.size(); i++)
	{
		cout<<pares[i]<<endl;
	}
		
	for(int i = 0; i < impares.size(); i++)
	{
		
		if(i+1 == impares.size())
			cout<<impares[i];
		else
			cout<<impares[i]<<endl;
	}

}



int main(){
    _;

	int n; cin>>n;
	solution(n);



    return 0;
}
