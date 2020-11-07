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
    int N, total, d, ans, s_i;
    cin >> N;
    int a[109];

    total = 0;
    rep(i, N){
        cin >> a[i];
        total += a[i];
    }

    if(total % N != 0){
        cout << -1 << endl;
        return 0;
    }

    d = total / N;

    total = 0;
    ans = 0;
    s_i = 0;
    rep(i, N){
        total += a[i];
        if((i + 1 - s_i) * d == total){
            ans += i - s_i;
            s_i = i + 1;
            total = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
