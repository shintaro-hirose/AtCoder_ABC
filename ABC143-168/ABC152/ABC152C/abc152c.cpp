/*
2020-04-25
atcoder ABC
C - Low Elements
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, ans = 0;
    cin >> N;
    int min_p = N;
    for (int i = 0; i < N; i++) {
        int p;
        cin >> p;
        min_p = min(min_p, p);
        if (min_p == p) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
