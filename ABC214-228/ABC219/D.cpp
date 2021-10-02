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
#define NAX (330)

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    vi A(N), B(N);
    rep(i, N) cin >> A[i] >> B[i];
    // dp[i][j]: i個目の弁当まで見たとき、状態j (X=j/NAX,
    // Y=j%NAX)買うために必要な最小個数
    vvi dp(N + 1, vi(NAX * NAX, INF));
    rep(i, N + 1) { dp[i][0] = 0; }
    rep(i, N) {
        int nx = A[i];
        int ny = B[i];
        rep(j, NAX * NAX) {
            int cx = j / NAX;
            int cy = j % NAX;
            int px = max(0, cx - nx);
            int py = max(0, cy - ny);
            dp[i + 1][j] = min(dp[i][j], dp[i][px * NAX + py] + 1);
        }
    }
    int ans = dp[N][X * NAX + Y];
    if(ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}