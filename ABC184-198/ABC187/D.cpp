#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N; cin >> N;
    vl D(N);
    ll X = 0;
    rep(i, N) {
        ll a,b; cin >> a >> b;
        D[i] = 2 * a + b;
        X -= a;
    }
    sort(D.rbegin(), D.rend());
    int ans = 0;
    while(X<=0){
        X += D[ans];
        ans++;
    }
    cout << ans << endl;
    return 0;
}