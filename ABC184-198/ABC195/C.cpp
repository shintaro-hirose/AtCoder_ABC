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

    ll ans = 0;
    int k=1;
    while((ll)pow(10, k) <= N){
        ans += ((k-1)/3) * (ll)(pow(10, k) - pow(10, k - 1));
        k++;
        // cout << ans << endl;
    }
    // cout << k << endl;
    ans += ((k-1)/3) * (ll)(N - pow(10, k - 1) + 1);
    cout << ans << endl;
    return 0;
}