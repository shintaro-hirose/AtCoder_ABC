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
#define INF (1e9+10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    ll N; cin >> N;
    unordered_set<ll> us;
    ll ans = N;
    for(ll i=2; i * i <= N; i++){
        for(int j = 2; j <= 100; j++){
            ll x = pow(i, j);
            if(x > N) break;
            if(us.find(x) == us.end()) {
                ans--;
                us.insert(x);
            }
        }
    }
    cout << ans << endl;
    return 0;
}