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

int solve(vector<vector<i_i>> adj, int sn) {
    priority_queue<i_i, vector<i_i>, greater<i_i>>
        q; // p.first = time, p.second = node
    int dist[2010];
    memset(dist, INF, sizeof(dist));
    vi sndist;

    dist[sn] = 0;
    q.push({0, sn});

    while(!q.empty()) {
        int curt = q.top().first;
        int curn = q.top().second;
        // cout << "sn: " << sn << ", curn: " << curn << ", curt: " << curt
        //      << endl;
        q.pop();
        for(auto p : adj[curn]) {
            int next = p.first + curt;
            int nexn = p.second;
            if(nexn == sn) {
                sndist.push_back(next);
            }
            if(next < dist[nexn]) {
                q.push({next, nexn});
                dist[nexn] = next;
            }
        }
    }
    if(sndist.size() == 0) {
        return -1;
    }
    sort(sndist.begin(), sndist.end());
    return sndist[0];
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<i_i>> adj(N);
    rep(i, M) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        adj[a].push_back({c, b});
    }

    rep(i, N) { sort(adj[i].begin(), adj[i].end()); }
    rep(i, N) {
        int ans = solve(adj, i);
        cout << ans << endl;
    }
    return 0;
}