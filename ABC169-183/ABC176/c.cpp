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
    int N; cin >> N;
    vector<int> As(N);
    rep(i, N) cin >> As[i];
    ll ans = 0;
    int curLevel = 0;
    for(int A: As){
        ans += (ll)max(0, curLevel - A);
        curLevel = max(curLevel, A);
    }
    cout << ans << endl;

    return 0;
}