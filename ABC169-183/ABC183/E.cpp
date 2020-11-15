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

template <unsigned int MOD>
struct ModInt {
    using uint = unsigned int;
    using ull = unsigned long long;
    using M = ModInt;
    
    uint v;
    
    ModInt(ll _v = 0) { set_norm(_v % MOD + MOD); }
    M& set_norm(uint _v) {  //[0, MOD * 2)->[0, MOD)
        v = (_v < MOD) ? _v : _v - MOD;
        return *this;
    }
    
    explicit operator bool() const { return v != 0; }
    M operator+(const M& a) const { return M().set_norm(v + a.v); }
    M operator-(const M& a) const { return M().set_norm(v + MOD - a.v); }
    M operator*(const M& a) const { return M().set_norm(ull(v) * a.v % MOD); }
    M operator/(const M& a) const { return *this * a.inv(); }
    M& operator+=(const M& a) { return *this = *this + a; }
    M& operator-=(const M& a) { return *this = *this - a; }
    M& operator*=(const M& a) { return *this = *this * a; }
    M& operator/=(const M& a) { return *this = *this / a; }
    M operator-() const { return M() - *this; }
    M& operator++(int) { return *this = *this + 1; }
    M& operator--(int) { return *this = *this - 1; }
    
    M pow(ll n) const {
        if (n < 0) return inv().pow(-n);
        M x = *this, res = 1;
        while (n) {
            if (n & 1) res *= x;
            x *= x;
            n >>= 1;
        }
        return res;
    }
    
    M inv() const {
        ll a = v, b = MOD, p = 1, q = 0, t;
        while (b != 0) {
            t = a / b;
            swap(a -= t * b, b);
            swap(p -= t * q, q);
        }
        return M(p);
    }
    
    bool operator==(const M& a) const { return v == a.v; }
    bool operator!=(const M& a) const { return v != a.v; }
    friend ostream& operator<<(ostream& os, const M& a) { return os << a.v; }
    static uint get_mod() { return MOD; }
};

using Mint = ModInt<mod>;

Mint my_mult(int n){
    Mint res = 1;
    rep(i,n)res *= i + 1;
    return res;
}

Mint my_comb(int n, int k){
    Mint res = 1;
    res *= my_mult(n);
    res /= my_mult(k);
    res /= my_mult(n - k);
    return res;
}

Mint my_pow2(int n){
    Mint res = 1;
    rep(i, n)res *= 2;
    return res;
}

int main() {
    int H, W; cin >> H >> W;
    vs S(H);
    rep(i, H) cin >> S[i];
    // dp[i][j]: i,j にたどりつく場合の数
    Mint dp[H][W];
    Mint dpx[H][W];
    Mint dpy[H][W];
    Mint dpxy[H][W];
    dp[0][0] = 1;
    dpx[0][0] = 1;
    dpy[0][0] = 1;
    dpxy[0][0] = 1;
    rep(i, H)rep(j, W){
        if(i == 0 && j == 0)continue;
        if(S[i][j] == '#') continue;
        if(j)dpx[i][j] += dpx[i][j-1];
        if(i)dpy[i][j] += dpy[i-1][j];
        if(i && j)dpxy[i][j] += dpxy[i-1][j-1];
        dp[i][j] += dpx[i][j];
        dp[i][j] += dpy[i][j];
        dp[i][j] += dpxy[i][j];
        dpx[i][j] += dp[i][j];
        dpy[i][j] += dp[i][j];
        dpxy[i][j] += dp[i][j];
    }
    cout << dp[H-1][W-1] << endl;

    return 0;
}