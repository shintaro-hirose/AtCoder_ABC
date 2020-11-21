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

int H, W;
vvl dp;
vvl S;

int hmove[4] = {0,1,0,-1};
int wmove[4] = {1,0,-1,0};

ll f(int a, int b){
    if(dp[a][b] != 0) return dp[a][b];
    ll res = 1;
    rep(i, 4){
        int ni, nj;
        ni = a + hmove[i];
        nj = b + wmove[i];
        if(ni>=0 && nj>=0 && ni<H && nj<W && S[ni][nj]>S[a][b]){
            res = (res + f(ni, nj)) % mod;
        }
    }
    return dp[a][b] = res;
}

int main() {
    cin >> H >> W;
    S = vvl(H, vl(W));
    dp = vvl(H, vl(W));
    rep(i, H) rep(j, W) {
        ll x;
        scanf("%lld", &x);
        S[i][j] = x;
    }
    ll ans = 0 ;
    rep(i, H) rep(j, W){
        ans = (ans + f(i,j)) % mod;
    }
    cout << ans << endl;
    return 0;
}