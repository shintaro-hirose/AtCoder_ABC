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
// #define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    int h,w,k; cin >> h >> w >> k;
    vector<string> field(h);
    rep(i,h) cin >> field.at(i);
    ll ans = 0;
    rep(is, 1<<h) rep(js, 1<<w){
        ll cnt = 0;
        rep(i, h) rep(j, w){
            if(is>>i & 1) continue;
            if(js>>j & 1) continue;
            if(field.at(i).at(j) == '#') cnt++;
        }
        if(cnt == k) ans++;
    }
    cout << ans << endl;
    return 0;
}