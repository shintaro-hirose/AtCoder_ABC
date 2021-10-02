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
const ll mod = 998244353;
#define NAX (2000010)

ll multmod2[NAX];

int main() {
    ll N, D;
    cin >> N >> D;
    multmod2[0] = 1;
    for(int i = 1; i < NAX; i++) {
        multmod2[i] = (multmod2[i - 1] * 2) % mod;
    }
    ll ans = 0;
    rep(i, N) {
        // i: depth from 0
        ll fd = 0;
        if(i + D < N) {
            fd += multmod2[D];
        }
        if(D > 1) {
            fd += max(0LL, min(D - 1, N - i - 1) - max(0LL, i + D - N)) *
                  (multmod2[D - 2]);
        }
        fd %= mod;
        ans += fd * multmod2[i];
        ans %= mod;
    }
    ans *= 2;
    ans %= mod;
    cout << ans << endl;
    return 0;
}