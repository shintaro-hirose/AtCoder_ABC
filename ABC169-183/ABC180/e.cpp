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
#define INF (1e18)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, ans;
    cin >> N;
    vector<int> Xs(N);
    vector<int> Ys(N);
    vector<int> Zs(N);
    rep(i, N) cin >> Xs[i] >> Ys[i] >> Zs[i];
    // dp[i][j] : 今まで集合i を訪れた, 今jにいるときのmin
    vvl dp(1<<N, vl(N, INF));

    rep(i, N){
        dp[1<<i][i] = abs(Xs[0]-Xs[i]) + abs(Ys[0]-Ys[i]) + max(0, Zs[i]-Zs[0]);
    }

    rep(i, 1<<N){
        rep(j, N){
            rep(k, N){
                int next = i | (1<<k);
                ll cost = dp[i][j] + abs(Xs[k]-Xs[j]) + abs(Ys[k]-Ys[j]) + max(0, Zs[k]-Zs[j]);
                dp[next][k] = min(dp[next][k], cost);
            }
        }
    }
    cout << dp[(1<<N) - 1][0] << endl;

    // rep(i,N){
    //     rep(j, 1<<N){
    //         cout << dp[i][j] << ", ";
    //     }
    //     cout << endl;
    // }
    return 0;
}