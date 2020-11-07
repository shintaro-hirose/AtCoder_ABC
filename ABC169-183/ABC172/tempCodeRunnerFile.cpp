#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e12)
#define PI (acos(-1))
#define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;
int main() {
    int n,m;
    ll k;
    cin >> n >> m >> k;
    //a[0] = 0, a[1] = A1, ... , a[n] = An
    vector<ll> a(n+1);
    vector<ll> b(m+1);
    //asum[0] = 0, asum[1] = asum[0] + a[1], ... , asum[n] = asum[n-1] + a[n], asum[n+1] = INF
    vector<ll> asum(n+2);
    vector<ll> bsum(m+2);
    rep(i,n){
        cin >> a[i+1];
        asum[i+1] = asum[i] + a[i+1];
    }
    rep(i,m){
        cin >> b[i+1];
        bsum[i+1] = bsum[i] + b[i+1];
    }
    asum[n+1] = INF;
    bsum[m+1] = INF;
    int ans = 0;
    auto bsum_last = bsum.end();
    rep(i,n+1){
        if(asum[i] > k) break;
        int a_cnt = i;
        //bsumのなかでk - asum[i]を超えるところの左端のindexをさがす。それに-1する。
        //bsum.end()まで見ていると遅い？
        //bsum_lastを左にずらしていく
        bsum_last = upper_bound(bsum.begin(), bsum_last, k - asum[i]);
        int b_cnt = bsum_last - bsum.begin() - 1;
        bsum_last--;
        ans = max(ans, a_cnt + b_cnt);
    }
    // debug(a);
    // debug(b);
    // debug(asum);
    // debug(bsum);    
    cout << ans << endl;
    return 0;
}