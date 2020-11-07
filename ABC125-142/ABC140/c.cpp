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
    int n;
    cin >> n;
    int b[110];
    int a[110];
    rep(i,n-1) cin >> b[i];
    a[n-1] = b[n-2];
    rep(i,n-2){
        a[n - 2 - i] = min(b[n - 2 - i], b[n - 3 - i]);
    }
    a[0] = b[0];
    ll ans = 0;
    rep(i,n) {
        ans += a[i];
        // cout << a[i] << ", ";
    }
    cout << ans << endl;
    return 0;
}
