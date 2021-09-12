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
    int N, M, Q; cin >> N >> M >> Q;
    vi Ws(N), Vs(N); rep(i, N) cin >> Ws[i] >> Vs[i];
    vi Xs(M); rep(i, M) cin >> Xs[i];
    vi Ls(Q), Rs(Q); rep(i, Q) cin >> Ls[i] >> Rs[i];

    vector<i_i> PN;
    rep(i, N) PN.push_back(i_i(Vs[i], Ws[i]));
    sort(PN.rbegin(), PN.rend());

    vector<i_i> PM;
    rep(i, M) PM.push_back(i_i(Xs[i], i));
    sort(PM.begin(), PM.end());

    rep(qi, Q){
        vb hashM(M);
        int ans = 0 ;
        rep(ni, N){
            int v = PN[ni].first;
            int w = PN[ni].second;
            rep(mi, M){
                if(hashM[mi] || (PM[mi].second >= Ls[qi] - 1 && PM[mi].second <= Rs[qi] - 1)) continue;
                if(PM[mi].first >= w) {
                    ans += v;
                    hashM[mi] = true;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}