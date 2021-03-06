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
    ll C; cin >> C;
    vector<l_l> Y;
    rep(i, N){
        ll a,b,c; cin >> a >> b >> c;
        Y.push_back(l_l(a-1,c));
        Y.push_back(l_l(b,-c));
    }
    sort(Y.begin(), Y.end());
    ll cost = 0;
    ll ans = 0;
    int day = 0;
    rep(i, N*2){
        ans += (Y[i].first - day) * min(cost, C);
        cost += Y[i].second;
        day = Y[i].first;
    }
    cout << ans << endl;
    return 0;
}