#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))

const ll mod = 1000000007;

ll modpow(ll a, ll b){
    ll ans = 1;
    rep(i, b){
        ans = (ans * a) % mod;
    }
    return ans;
}

int main() {
    ll N; cin >> N;
    ll ans = (modpow(10,N) + 2*mod - modpow(9, N) - modpow(9, N) + modpow(8, N)) % mod;
    cout << ans << endl;
    return 0;
}