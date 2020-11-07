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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N; cin >> N;
    vector<vector<i_i>> adj(N, vector<i_i>(0));
    rep(i, N - 1){
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        adj[u].push_back(make_pair(v, w % 2));
        adj[v].push_back(make_pair(u, w % 2));
    }
    queue<int> q;
    q.push(0);

    vi color(N, -1);
    color[0] = 0;

    while(!q.empty()){
        int ci = q.front();
        q.pop();

        for(i_i x: adj[ci]){
            int ni = x.first;
            int a = x.second;
            if(color[ni] == -1){
                color[ni] = color[ci] ^ a;
                q.push(ni);
            }
        }
    }
    rep(i, N){
        cout << color[i] << endl;
    }
    return 0;
}