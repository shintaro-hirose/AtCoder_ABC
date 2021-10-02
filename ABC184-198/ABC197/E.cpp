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
    int N;
    cin >> N;
    int b[201010][2];
    rep(i, N) {
        b[i + 1][0] = INF;
        b[i + 1][1] = -INF;
    }
    rep(i, N) {
        int x, c;
        cin >> x >> c;
        b[c][0] = min(b[c][0], x);
        b[c][1] = max(b[c][1], x);
    }
    vector<i_i> colors(0);
    rep(i, N) {
        if(b[i + 1][0] != INF) {
            colors.push_back(i_i(b[i + 1][0], b[i + 1][1]));
        }
    }
    ll dp[201010][2];
    dp[0][0] = colors[0].first;
    dp[0][1] = colors[0].second;
    rep(i, colors.size() - 1) {
        
        if(colors[i].first <= colors[i + 1].second){

        }
        dp[i + 1][0] =
            min(dp[i][0] + abs(colors[i].first - colors[i + 1].first),
                dp[i][1] + abs(colors[i].second - colors[i + 1].first));
        dp[i + 1][1] =
            min(dp[i][0] + abs(colors[i].first - colors[i + 1].second),
                dp[i][1] + abs(colors[i].second - colors[i + 1].second));
    }
    ll ans = min(dp[colors.size()][0] + abs(colors[colors.size() - 1].first),
                 dp[colors.size()][1] + abs(colors[colors.size() - 1].second));
    cout << ans << endl;
    return 0;
}