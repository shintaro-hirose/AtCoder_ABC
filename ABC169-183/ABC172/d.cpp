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
#define debug(a) cout << "["; rep(i,a.size()) cout << a.at(i) << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    ll n; cin >> n;
    vector<ll> cnt(n,1);
    for(ll i = 2; i <= n; i++){
        ll d = 1;
        while(i * d <= n){
            cnt.at(i * d - 1)++;
            d++;
        }
    }
    ll ans = 0;
    rep(i,n){
        ans += (i+1) * cnt.at(i);
    }
    cout << ans << endl;
    return 0;
}
