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

int main() {
    int H, W, N, M; cin >> H >> W >> N >> M;
    vvi S(H, vi(W));
    vvb Rseen(H, vb(W, false));
    vvb Cseen(H, vb(W, false));
    vvb can(H, vb(W, false));
    vector<i_i> P(0);
    rep(i, N){
        int h,w;
        cin >> h >> w;
        h--; w--;
        S[h][w] = 1;
        P.push_back(i_i(h,w));
    }
    rep(i, M){
        int h,w;
        cin >> h >> w;
        h--; w--;
        S[h][w] = -1;
    }
    // 横に見る
    for(i_i p: P){
        int h,w;
        h = p.first; w = p.second;
        Rseen[h][w] = true;
        can[h][w] = true;
        for(int i = w-1; i >= 0; i--){
            if(Rseen[h][i] || S[h][i] != 0)break;
            Rseen[h][i] = true;
            can[h][i] = true;
        }
        for(int i = w+1; i < W; i++){
            if(Rseen[h][i] || S[h][i] != 0)break;
            Rseen[h][i] = true;
            can[h][i] = true;
        }
    }
    for(i_i p: P){
        int h,w;
        h = p.first; w = p.second;
        Cseen[h][w] = true;
        can[h][w] = true;
        for(int i = h-1; i >= 0; i--){
            if(Cseen[i][w] || S[i][w] != 0)break;
            Cseen[i][w] = true;
            can[i][w] = true;
        }
        for(int i = h+1; i < H; i++){
            if(Cseen[i][w] || S[i][w] != 0)break;
            Cseen[i][w] = true;
            can[i][w] = true;
        }
    }
    int ans = 0;
    rep(i, H) rep(j, W){
        if(can[i][j])ans++;
    }
    cout << ans << endl;
    return 0;
}