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

int f(int a, int b) { return (a + b) % 10; }
int g(int a, int b) { return (a * b) % 10; }

int main() {
    int N;
    cin >> N;
    vl A(N);
    rep(i, N) cin >> A[i];

    // dp[i][j] = i 回操作したときに状態jになる通りの数
    vvl dp(N, vl(100));
    dp[0][A[0] * 10 + A[1]] = 1;
    rep(j, N - 2) {
        rep(k, 100) {
            int a = k / 10;
            int b = k % 10;
            dp[j + 1][f(a, b) * 10 + A[j + 2]] += dp[j][k];
            dp[j + 1][f(a, b) * 10 + A[j + 2]] %= mod;
            dp[j + 1][g(a, b) * 10 + A[j + 2]] += dp[j][k];
            dp[j + 1][g(a, b) * 10 + A[j + 2]] %= mod;
        }
    }

    rep(i, 10) {

        ll ans = 0;
        rep(k, 100) {
            int a = k / 10;
            int b = k % 10;
            if(f(a, b) == i) {
                ans += dp[N - 2][k];
                ans %= mod;
            }

            if(g(a, b) == i) {
                ans += dp[N - 2][k];
                ans %= mod;
            }
        }
        cout << ans << endl;
    }
    return 0;
}