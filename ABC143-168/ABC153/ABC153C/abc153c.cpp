/*
2020-04-25
atcoder ABC
C - Fennec vs Monster
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, K;
    ll ans = 0;
    cin >> N >> K;
    vector<ll> hps(N);
    for(int i = 0; i < N; i++) {
        cin >> hps[i];
    }
    sort(hps.begin(), hps.end());

    for(int i = 0; i < N - min(N, K); i++) {
        ans += hps[i];
    }
    
    cout << ans << endl;
    return 0;
}
