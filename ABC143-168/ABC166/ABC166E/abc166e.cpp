/*
2020-05-03
atcoder ABC
*/

#include <bits/stdc++.h>
#include <math.h>
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
    ll ans = 0;
    cin >> N;
    map<ll, int> L_map;

    rep(i, N){
        ll A;
        cin >> A;
        L_map[i + A]++;
        ans += L_map[i - A];
    }

    cout << ans << endl;
    return 0;
}
