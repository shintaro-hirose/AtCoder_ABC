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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    vi As(M);
    vi Cs(M);
    rep(i, M){
        int b;
        cin >> As[i] >> b;
        int csum = 0;
        rep(j, b){
            int c; cin >> c;
            c--;
            csum += (1 << c);
        }
        Cs[i] = csum;
    }
    
    // dp[i][j] i番目の鍵まで見たときの 集合jを開けるときの最小値
    vvi dp(M+1, vi(1<<N, INF));
    dp[0][0] = 0;
    rep(i, M){
        rep(j, 1<<N){
            int nj = j | Cs[i];
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
            dp[i+1][nj] = min(dp[i+1][nj], dp[i][j] + As[i]);
        }
    }
    int ans = dp[M][(1<<N)-1];
    cout << (ans == INF ? -1 : ans) << endl;
    return 0;
}