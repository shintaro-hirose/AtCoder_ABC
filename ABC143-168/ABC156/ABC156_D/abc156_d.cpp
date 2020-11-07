/*
2020-04-20
atcoder ABC
C - Sum of gcd of Tuples (Easy)
*/

#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

ll n, a, b;



void input() {
    cin >> n >> a >> b;
    return;
}

ll combination(ll n, ll r) {
  if ( r * 2 > n ) r = n - r;
  ll dividend = 1;
  ll divisor  = 1;
  for ( ll i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

void solve() {
    ll ans = (pow(2, n) - 1 - (combination(n, a) + combination(n, b)));
    ans %= mod;
    cout << ans << endl;
    return;
}

int main() {
    input();
    solve();
    return 0;
}
