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

int main() {
    int N;
    cin >> N;
    // dp[i]: i を払うために必要な回数の最小値
    vector<int> dp(N + 1, INF);
    dp[0] = 0;
    rep(i, N){
        dp[i + 1] = min(dp[i + 1], dp[i] + 1);
        for(int j = 1; j <= 6; j++){
            int d = pow(6, j);
            if(i + d <= N){
                dp[i + d] = min(dp[i + d], dp[i] + 1);
            }
        }
        for(int j = 1; j <= 5; j++){
            int d = pow(9, j);
            if(i + d <= N){
                dp[i + d] = min(dp[i + d], dp[i] + 1);
            }
        }
    }
    cout << dp[N] << endl;

    return 0;
}