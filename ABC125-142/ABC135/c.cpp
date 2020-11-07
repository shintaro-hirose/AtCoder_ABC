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
    int N;
    cin >> N;
    vector<ll> monsters(N+1);
    rep(i, N+1){
        cin >> monsters[i];
    }
    ll helpFromPrev, ans;
    helpFromPrev = 0;
    ans = 0;
    rep(i, N){
        ll b;
        cin >> b;
        if(helpFromPrev + b > monsters[i]){
            ans += monsters[i];
            helpFromPrev = min(b, helpFromPrev + b - monsters[i]);
        } else {
            ans += helpFromPrev + b;
            helpFromPrev = 0;
        }
    }
    ans += min(helpFromPrev, monsters[N]);

    cout << ans << endl;
    return 0;
}
