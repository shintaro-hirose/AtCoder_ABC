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
    int N;
    cin >> N;
    set<ll> S;
    for(int i = 0; i < N; i++) {
        ll a;
        cin >> a;
        S.insert(a);
    }
    if(S.size() == N) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
