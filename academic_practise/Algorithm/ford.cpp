#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';

struct Edge {
    int u, v, weight;
};

vector<Edge> edge_weight;
vector<int> dist, previous;
int v, e;
char Source;

void BellmanFord() {
    dist.assign(v, INT_MAX);
    previous.assign(v, -1);
    dist[Source - 'A'] = 0;

    for (int i = 0; i < v - 1; i++) {
        for (auto &edge : edge_weight) {
            int u = edge.u, v = edge.v, w = edge.weight;
            if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                previous[v] = u;
            }
        }
    }

    cout << "Distance:\n";
    for (int i = 0; i < v; i++) {
        cout << (char)('A' + i) << ": " << dist[i] << '\n';
    }

    cout << "\nPrevious:\n";
    for (int i = 0; i < v; i++) {

        cout << (char)('A' + i) << ": " << (previous[i] == -1 ? "None" : to_string(previous[i])) << '\n';
    }

    cout << "\n=== Previous Nodes ===\n";
    for (int i = 0; i < v; i++) {
        
        cout << (char)('A' + i) << ": " << (previous[i] == -1 ? "None" : string(1, 'A' + previous[i])) << '\n';
    }

    bool ok = false;
    for (auto &edge : edge_weight) {
        int u = edge.u, v = edge.v, w = edge.weight;
        if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
            ok = true;
            break;
        }
    }

    if (ok) {
        cout << "\n=== Negative Cycle Detected ===\n";
    } else {
        cout << "\n=== No Negative Cycle ===\n";
    }
}

void solve() {
    cin >> v >> e >> Source;
    edge_weight.resize(e);

    for (int i = 0; i < e; i++) {
        char a, b;
        int x;
        cin >> a >> b >> x;
        edge_weight[i] = {a - 'A', b - 'A', x};
    }

    BellmanFord();
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}
