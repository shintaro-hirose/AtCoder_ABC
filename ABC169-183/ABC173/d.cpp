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
    vector<ll> As(n);
    rep(i,n) cin >> As.at(i);
    sort(As.begin(), As.end());
    ll ans = 0;
    rep(i,n-1){
        if(i==0){
            ans += As.at(n-1);
        } else {
            ans += As.at(n - 1 - (i + 1) / 2);
        }
    }
    cout << ans << endl;

    return 0;
}