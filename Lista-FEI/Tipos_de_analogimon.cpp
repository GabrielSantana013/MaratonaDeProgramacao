#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> graph;
vector<bool> visitados;
int contadorDeMonstros = 0;

void dfs(int nodo){

    contadorDeMonstros++;
    visitados[nodo] = true;

    for(auto v: graph[nodo])
    {
        if(!visitados[v])
        {
            dfs(v);
        }
    }
}

void solution(int n, int m)
{
    for(int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v; u--; v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }


    int nodo;
    cin>>nodo; nodo--;

    dfs(nodo);
    cout<< contadorDeMonstros << endl;

}


int main()
{
    int n, m;
    while(cin>>n>>m)
    {
        graph.resize(n);
        visitados.resize(m);
        solution(n,m);
        visitados.clear();graph.clear();contadorDeMonstros = 0;
    }


    return 0;
}
