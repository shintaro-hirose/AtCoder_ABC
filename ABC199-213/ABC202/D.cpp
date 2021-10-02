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

ll dp[31][31];

string S(int i, int j, ll k) {
    if(i == 0) {
        return string(j, 'b');
    } else if(j == 0) {
        return string(i, 'a');
    } else {
        if(dp[i - 1][j] >= k) {
            return 'a' + S(i - 1, j, k);
        } else {
            return 'b' + S(i, j - 1, k - dp[i - 1][j]);
        }
    }
}

int main() {
    int A, B;
    ll K;
    cin >> A >> B >> K;
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
    rep(i, 31) rep(j, 31) {
        if(i < 30) {
            dp[i + 1][j] += dp[i][j];
        }
        if(j < 30) {
            dp[i][j + 1] += dp[i][j];
        }
    }
    cout << S(A, B, K) << endl;

    return 0;
}