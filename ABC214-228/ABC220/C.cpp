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
const ll mod = 1000000007;

int main() {
    ll N, X;
    cin >> N;
    vl S(N + 1);
    rep(i, N) {
        ll A;
        cin >> A;
        S[i + 1] = S[i] + A;
    }
    cin >> X;
    // rep(i, N + 1) cout << S[i] << endl;
    ll ans = 0;
    if(X % S[N] == 0) {
        ans = (X / S[N]) * N + 1;
    } else {
        ans = (X / S[N]) * N;
        rep(i, N + 1) {
            if(X % S[N] < S[i]) {
                // cout << "i: " << i << endl;
                ans += i;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}