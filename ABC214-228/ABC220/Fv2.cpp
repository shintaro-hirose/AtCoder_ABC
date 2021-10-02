#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9 + 10)
#define PI (acos(-1))
const ll mod = 1000000007;
#define NAX (201010)

int N;
vvi adj;
bool seen1[NAX];
bool seen2[NAX];
ll dist[NAX];
ll sub[NAX];

void dfs(int n, ll d) {
    dist[0] += d;

    for(int x : adj[n]) {
        if(!seen1[x]) {
            seen1[x] = true;
            dfs(x, d + 1);
            sub[n] += sub[x];
        }
    }
}

void dfs2(int n) {
    for(int x : adj[n]) {
        if(!seen2[x]) {
            seen2[x] = true;
            dist[x] = dist[n] + N - 2 * sub[x];
            dfs2(x);
        }
    }
}

int main() {
    cin >> N;
    adj.resize(N);

    rep(i, N - 1) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(seen1, false, sizeof(seen1));
    memset(seen2, false, sizeof(seen2));
    memset(dist, 0, sizeof(dist));
    rep(i, N) sub[i] = 1;

    seen1[0] = true;
    seen2[0] = true;
    dfs(0, 0);
    dfs2(0);
    rep(i, N) { cout << dist[i] << endl; }
    return 0;
}