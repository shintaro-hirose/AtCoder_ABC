/*
2020-04-25
atcoder ABC
C - Rally
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
    int N, min_x = INF, max_x = 0;
    ll ans = INF;
    cin >> N;

    vector<int> points(N);
    for(int i = 0; i< N; i++) {
        cin >> points[i];
        min_x = min(min_x, points[i]);
        max_x = max(max_x, points[i]);
    }
    for(int i = min_x; i < max_x + 1; i++) {
        ll d = 0;
        for(int j = 0; j < N; j++) {
            d += (points[j] - i) *  (points[j] - i);
        }
        ans = min(ans, d);
    }
    cout << ans << endl;
    return 0;
}
