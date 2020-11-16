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
    vector<map<int, int>> mp;

    UnionFind(int n): par(n,-1), mp(n) {}
    int root(int x) {
        if (par[x] < 0) return x;
        return par[x] = root(par[x]);
    }
    bool unite(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x,y);
        for(auto p: mp[y]){
            mp[x][p.first] += p.second;
        }
        mp[y] = map<int, int>();
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    bool same(int x, int y) { return root(x) == root(y);}
    int size(int x) { return -par[root(x)];}
};

int main() {
    int N, Q; cin >> N >> Q;
    UnionFind uf(N);
    rep(i, N) {
        int c; cin >> c;
        uf.mp[i][c] = 1;
    }
    rep(i, Q){
        int x, a, b; cin >> x >> a >> b;
        if(x == 1){
            a--; b--;
            uf.unite(a,b);
        } else {
            a--;
            cout << uf.mp[uf.root(a)][b] << endl;
        }
    }

    return 0;
}