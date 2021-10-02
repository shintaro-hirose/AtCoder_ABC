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

vvi adj(201010);

ll dist1 = 0;
bool seen[201010];
int cnt[201010];
bool seen2[201010];

void dfs(int u, ll d) {
    dist1 += d;
    for(int x : adj[u]) {
        if(!seen[x]) {
            seen[x] = true;
            dfs(x, d + 1);
        }
    }
    return;
}

ll dfs2(int u) {
    for(int x : adj[u]) {
        if(!seen2[x]) {
            seen2[x] = true;
            cnt[u] += dfs2(x);
        }
    }
    return cnt[u];
}

int main() {
    int N;
    cin >> N;
    rep(i, N - 1) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(seen, false, sizeof(seen));
    memset(seen2, false, sizeof(seen2));
    rep(i, N) cnt[i] = 1;

    seen[0] = true;
    seen2[0] = true;
    dfs(0, 0);
    dfs2(0);
    cout << dist1 << endl;
    rep(i, N - 1) { cout << dist1 + N - 2 * cnt[i + 1] << endl; }
    return 0;
}