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
    int N, K; cin >> N >> K;
    vector<int> As(N);
    int maxA = 0;
    rep(i, N) {
        cin >> As[i];
        maxA = max(maxA, As[i]);
    }

    int left = 1, right = maxA;
    int m;
    int ans = INF;
    while(left <= right){
        m = (left + right) / 2;
        ll cutCnt = 0;
        rep(i, N) {
            cutCnt += (As[i] + m - 1) / m - 1;
        }
        if(cutCnt > K) {
            left = m+1;
        } else {
            right = m-1;
            ans = min(m, ans);
        }
    }

    cout << ans << endl;

    return 0;
}