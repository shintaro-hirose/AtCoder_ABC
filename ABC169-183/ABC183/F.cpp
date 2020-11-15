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
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    
    UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++) par[i] = i;
    }
    
    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }
    
    void unite(int x, int y) { // xとyの木を併合
        int rx = root(x); //xの根をrx
        int ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
    }
    
    bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main() {
    int N, Q; cin >> N >> Q;
    vi C(N);
    rep(i, N) {
        cin >> C[i];
        C[i]--;
    }

    UnionFind uf(N);

    vector<unordered_map<int, int>> V(N, unordered_map<int, int>(0));

    rep(i, N){
        V[uf.root(i)][C[i]]++;
    }
    rep(i, Q){
        int q, a, b; cin >> q >> a >> b;
        if(q == 1){
            a--; b--;
            int aroot = uf.root(a);
            int broot = uf.root(b);
            if(aroot != broot){
                uf.unite(a, b);
                int bothroot = uf.root(b);
                for(auto itr = V[aroot].begin(); itr != V[aroot].end(); itr++){
                    V[bothroot][(*itr).first] += (*itr).second;
                    // cout << "********" << endl;
                    // cout << (*itr).first << endl;
                    // cout << (*itr).second << endl;
                    // cout << "********" << endl;
                    // cout << V[bothroot][(*itr).first] << endl;
                    // cout << endl;
                }
            }
            
        } else {
            a--;b--;
            cout << V[uf.root(a)][b] << endl;
        }
    }
    return 0;
}