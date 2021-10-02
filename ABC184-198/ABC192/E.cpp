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
#define INF (1e18 + 10)
#define PI (acos(-1))
const ll mod = 1000000007;

struct StructGreater {
    bool operator()(pair<int, ll> a, pair<int, ll> b) {
        return a.second > b.second;
    }
};
int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    X--;
    Y--;

    vector<vector<tuple<int, int, int>>> adj(N);
    rep(i, M) {
        int a, b, t, k;
        cin >> a >> b >> t >> k;
        a--;
        b--;
        adj[a].push_back({b, t, k});
        adj[b].push_back({a, t, k});
    }
    // bfs
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, StructGreater> q;
    vl minT(N, INF);

    q.push({X, 0});
    minT[X] = 0;

    while(!q.empty()) {
        int curn = q.top().first;
        ll curt = q.top().second;
        if(curn == Y) {
            cout << curt << endl;
            return 0;
        }
        q.pop();
        for(auto x : adj[curn]) {
            int nextn = get<0>(x);
            ll t = get<1>(x);
            ll k = get<2>(x);

            ll nextt = curt;
            if(curt % k == 0) {
                nextt += t;
            } else {
                nextt = (curt / k + 1) * k + t;
            }
            if(nextt < minT[nextn]) {
                minT[nextn] = nextt;
                q.push({nextn, nextt});
            }
        }
    }
    if(minT[Y] == INF) {
        cout << -1 << endl;
    }
    return 0;
}