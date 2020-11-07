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
    // h[i]: height of ith tower i: 0 ~ 998
    // h[i] = 1 + 2 + 3 + ... +  (i + 1) = (i+2)(i+1) / 2;
    // d[j] = h[j + 1] - h[j] j: 0 ~ 997
    // d[j] = j + 2 = b - a
    // S + a = h[b - a - 2]
    // S = h[b - a - 2] - a;
    int a, b, x;
    cin >> a >> b;
    x = b - a - 2;
    cout << (x+2) * (x+1) / 2 - a << endl;
    return 0;
}