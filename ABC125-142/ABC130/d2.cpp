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
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    ll total = 0;
    ll ans = 0;
    int r = 0;

    rep(i,n){
        while(total<k){
            if(r==n)break;
            total+=a[r];
            r++;
        }
        if(total<k) break;
        ans += n - r + 1;
        total -= a[i];
    }
    cout << ans << endl;
    return 0;
}
