#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solution(int T){

    for(int i = 0; i < T; i++)
    {

        int nodo; cin>>nodo;
        int V; cin>>V;

        vector<vector<int>> graph(V);
        vector<bool> visited(V, false);

        int A; cin>>A;

        for(int j = 0; j<A; j++)
        {
            int u, v; cin>>u>>v;
            graph[v].push_back(u);
            graph[u].push_back(v);
        }

        int res = 0;
        function<void(int)> dfs = [&](int nodo)
        {
            res++;
            visited[nodo] = true;
            for(auto v: graph[nodo])
            {
                if(!visited[v])
                {
                    dfs(v);
                }
            }
        };

        dfs(nodo);
        cout<<(res*2)-2 << endl;
    }
}

int main()
{

    int T; cin>>T;

    solution(T);

    return 0;
}
