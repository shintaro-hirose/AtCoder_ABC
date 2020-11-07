/*
2020-04-26
atcoder ABC
B - Battle
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
    int a, b, c, d, taka_time, aoki_time ;
    cin >> a >> b >> c >> d;
    taka_time = (c + b - 1) / b;
    aoki_time = (a + d - 1) / d;
    if (taka_time <= aoki_time) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
