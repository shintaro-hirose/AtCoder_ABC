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
    ll n,k,ans,total;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n+1);
    total = 0;
    rep(i,n){
        ll x;
        cin >> x;
        a[i] = x;
        total+=x;
        b[i+1] = total;
    }
    ans = 0;
    for(ll i = 1; i < n + 1; i++){
        ll cl = b[i-1];
        ll target = k + cl;
        vector<ll>::iterator position = lower_bound(b.begin()+i, b.end(),target);
        if(position == b.end()) continue;
        ll idx_lower = distance(b.begin(), position);
        ans += (n + 1 - idx_lower);
    }
    cout << ans << endl;
    
    return 0;
}
