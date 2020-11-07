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
    ll ans = INF;
    rep(i, pow(2, 9.0)){
        bitset<10> bs1(i);
        rep(j, pow(2, 7.0)){
            bitset<10> bs2(j);
            ll total = 0;
            ll cnt = 0;
            rep(k, 9){
                if(bs1.test(k)){
                    total += (ll)pow(6, (float)k);
                    cnt++;
                }
            }
            rep(k, 7){
                if(bs2.test(k)){
                    total += (ll)pow(9, (float)k);
                    cnt++;
                }
            }
            if(total <= n){
                cnt += (ll)n - total;
                ans = min(cnt, ans);
            }
        }
    }
    cout << ans << endl;
    return 0;
}