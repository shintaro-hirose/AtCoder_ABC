#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e18)
#define PI (acos(-1))

int main() {
    ll X, Y, A, B;
    cin >> X >> Y >> A >> B;

    ll ans = 0;

    while(X < Y / A && (A - 1) * X < B){
        X *= A;
        ans++;
    }
    ans += (Y - 1 - X) / B;
    cout << ans << endl;
    return 0;
}