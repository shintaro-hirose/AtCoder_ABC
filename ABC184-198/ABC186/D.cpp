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
    vl As(N);
    ll sum = 0;
    rep(i, N) {
        cin >> As[i];
        sum += As[i];
    }
    sort(As.begin(), As.end());
    ll ans = 0;
    rep(i, N-1){
        sum -= As[i];
        ans += sum - (N-1-i) * As[i];
    }
    cout << ans << endl;
    return 0;
}