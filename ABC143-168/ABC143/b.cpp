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
    int N, total, ans;
    cin >> N;
    vector<int> data(N);
    vector<int> totals(N);

    total = 0;
    rep(i, N){
        int d;
        cin >> d;
        total += d;
        data[i] = d;
        totals[i] = total;
    }
    ans = 0;
    rep(i, N - 1){
        ans += data[i + 1] * totals[i];
    }
    cout << ans << endl;
    return 0;
}
