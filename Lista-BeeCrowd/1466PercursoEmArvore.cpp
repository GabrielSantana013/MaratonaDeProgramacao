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

//estrutura da arvore
struct Node{

	int data;
	Node *left;
	Node *right;

	Node(int val){ //construtor do nodo

		data = val;
		left = right = nullptr;

	}

};


//funcao pra inserir nodos

Node* insert(Node *root, int val){

	if(root == nullptr) 
		return new Node(val);

	if(val < root->data){
		root->left = insert(root->left, val);
	}
	else
		root->right = insert(root->right, val);

	return root;
}


void bfs(Node* root, int caso){

	if(root== nullptr) return;

	cout<< "Case "<< caso+1<<":" <<endl;

	queue<Node*>q; q.push(root);
	
		while(!q.empty()){
	
		int size = q.size(); // numeros de nos no nivel atual

		for(int i = 0; i < size; i++){
			Node * curr = q.front();
			q.pop();

			if(i+1>=size)
				cout<< curr->data;
			else
				cout<< curr->data<<" ";

			if(curr->left) q.push(curr->left);
			if(curr->right) q.push(curr->right);
		}
	}
}

void solution(){

	int c; cin>>c;


	for(int i = 0; i < c; i++){
		int n; cin>>n;
		Node* root = nullptr;

		for(int j = 0; j < n; j++){	
			int x; cin>>x;
			root = insert(root, x);
		}	
			
			bfs(root, i);
			cout<<endl;
			cout<<endl;
	}
}


int main(){
    _;

	solution();

    return 0;
}
