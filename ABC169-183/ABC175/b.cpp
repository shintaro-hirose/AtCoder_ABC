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
    int n; cin >> n;
    vector<int> ls(n);
    ll ans = 0;
    rep(i, n){
        ll l; cin >> l;
        ls[i] = l;
    }
    sort(ls.begin(), ls.end());
    for(int i = 0; i <= n - 3; i++) {
        for(int j = i + 1; j <= n - 2; j++){
            for(int k = j + 1; k <= n - 1; k++){
                ll li = ls[i], lj = ls[j], lk = ls[k];
                if(li != lj && lj != lk && li + lj > lk) ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}