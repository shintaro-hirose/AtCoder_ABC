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
#define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    int n; cin >> n;
    vector<ll> As(n);
    rep(i,n) cin >> As.at(i);
    ll xorall = As.at(0);
    rep(i,n-1){
        xorall ^= As.at(i+1);
    }
    rep(i,n){
        ll ansi = xorall^As.at(i);
        cout << ansi << " ";
    }
    cout << endl;
    return 0;
}
