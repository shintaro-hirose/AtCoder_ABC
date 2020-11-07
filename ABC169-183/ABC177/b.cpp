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
    string S, T; cin >> S >> T;
    int ns = S.size(), nt = T.size();
    int ans = INF;
    rep(i, ns - nt + 1){
        int cnt = 0;
        rep(j, nt){
            if(S[i+j] != T[j]) cnt++;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}