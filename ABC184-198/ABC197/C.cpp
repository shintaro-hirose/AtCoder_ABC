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
#define INF (1e15)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N; cin >> N;
    vl As(N); rep(i, N) cin >> As[i];

    ll ans = INF;
    rep(bit, 1 << (N - 1)){
        ll cur = 0;
        vl Bs(0);
        rep(ni, N){
            cur |= As[ni];
            if(bit & 1 << ni) {
                Bs.push_back(cur);
                cur = 0;
            }
        }
        Bs.push_back(cur);
        // rep(bi, Bs.size())cout << Bs[bi] << ", ";
        // cout << endl;

        ll memoAns = Bs[0];
        for(int bi = 1; bi < (int)Bs.size(); bi++){
            memoAns ^= Bs[bi];
        }
        ans = min(ans, memoAns);
    }
    cout << ans << endl;
    return 0;
}