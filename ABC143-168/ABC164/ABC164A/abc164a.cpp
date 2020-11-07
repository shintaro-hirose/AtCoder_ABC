/*
2020-04-26
atcoder ABC
C - Rally
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
    int s, w;
    cin >> s >> w;
    if(s <= w) {
        cout << "unsafe" << endl;
    } else {
        cout << "safe" << endl;
    }
    
    return 0;
}
