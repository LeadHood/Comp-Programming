#include "bits/stdc++.h"

using namespace std;
using ll = long long;
using ull = unsigned long long;

void dfs(int u, vector<bool>& visited, const vector<vector<int>>& adj, vector<int>& connectionIds, int id, vector<pair<int, int>>& leftOvers, int last){
    //cout << u << endl;
    connectionIds[u] = id; 
    visited[u] = true;
    for (int v : adj[u]){
        if(last != -1 && visited[v] && v != last){
            leftOvers.push_back(make_pair(u, v));
        }
        else if(!visited[v]){
            dfs(v, visited, adj, connectionIds, id, leftOvers, u);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    if(N - 1 > M){
        cout << "Nej";
        return 0;
    }

    vector<pair<int, int>> connections;
    vector<vector<int>> adj(N, vector<int>());

    for (int i = 0; i < M; i++)
    {
        int ui, vi;
        cin >> ui >> vi;
        ui--;
        vi--;

        adj[ui].push_back(vi);
        adj[vi].push_back(ui);

        connections.push_back(make_pair(ui, vi));
    }

    vector<int> connectionIds(N, -1);
    vector<bool> visited(N);
    vector<pair<int, int>> leftOvers;

    int id = 0;

    for (int i = 0; i < N; i++){
        if(!visited[i]){
            dfs(i, visited, adj, connectionIds, id, leftOvers, -1);
            id++;
        }
    }

    int maxElement = *max_element(connectionIds.begin(), connectionIds.end());
    vector<int> firstOf(maxElement + 1, -1);

    for (int i = N - 1; i >= 0; i--){
        firstOf[connectionIds[i]] = i;
    }

    cout << "Ja\n";
    cout << maxElement  << endl;

    for (int i = 0; i < maxElement; i++){
        cout << leftOvers[i].first + 1 << " " << leftOvers[i].second + 1 << " ";
        cout << firstOf[i] + 1 << " " << firstOf[(i + 1)] + 1 << '\n';
    }

}