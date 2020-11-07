/*
2020-05-02
atcoder ABC
C - Rally
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
    ull ans = 0, cur = 100;
    ull X;
    cin >> X;

    while (cur < X){
        cur = floor(cur * 1.01);
        ans++;
    }
    cout << ans << endl;

    
    return 0;
}
