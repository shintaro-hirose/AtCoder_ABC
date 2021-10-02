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
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9 + 10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    ll N, K;
    cin >> N >> K;
    vector<l_l> A(N);
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        A[i] = l_l(a, b);
    }
    sort(A.begin(), A.end());
    ll ans = 0;
    rep(i, N) {
        if(A[i].first - ans <= K) {
            K -= A[i].first - ans;
            K += A[i].second;
            ans = A[i].first;
        } else
            break;
    }
    ans += K;
    cout << ans << endl;
    return 0;
}