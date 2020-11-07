/*
2020-04-25
atcoder ABC
E - Two Currencies
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

struct Edge {
    int to;     
    ll time;
    int charge;
    Edge(int t, ll ti, int c) : to(t), time(ti), charge(c) { }
};
using Graph = vector<vector<Edge>>;

int main() {
    int N, M;
    ll S;
    cin >> N >> M >> S;

    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int from, to, charge;
        ll time;
        cin >> from >> to >> charge >> time;
        G[from].push_back(Edge(to, time, charge));
        G[to].push_back(Edge(from, time, charge));
    }
}