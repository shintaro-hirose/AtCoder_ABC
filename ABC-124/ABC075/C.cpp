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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

struct UnionFind {
    vector<int> par;
    UnionFind(int n): par(n,-1) {}
    int root(int x) {
        if (par[x] < 0) return x;
        return par[x] = root(par[x]);
    }
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x,y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    bool same(int x, int y) { return root(x) == root(y);}
    int size(int x) { return -par[root(x)];}
};

int main() {
    int N, M; cin >> N >> M;
    vector<i_i> B(0);
    rep(i, M){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(a>b) swap(a,b);
        B.push_back(i_i(a,b));
    }
    int ans = 0;
    rep(i, M){
        UnionFind uf(N);
        rep(j, M){
            if(i==j) continue;
            uf.unite(B[j].first, B[j].second);
        }
        if(uf.size(0) != N) ans++;
    }
    cout << ans << endl;
    return 0;
}