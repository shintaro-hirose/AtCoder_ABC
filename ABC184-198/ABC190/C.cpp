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
    int N, M, K; cin >> N >> M;
    vi As(M);
    vi Bs(M);
    rep(i, M) cin >> As[i] >> Bs[i];
    cin >> K;
    vi Cs(K);
    vi Ds(K);
    rep(i, K) cin >> Cs[i] >> Ds[i];

    int ans = 0;
    rep(i, 1<<K){
        vi X(N);
        rep(j, K){
            if(i>>j & 1)X[Cs[j]-1] = 1;
            else X[Ds[j]-1] = 1;
        }
        int cnt = 0;
        rep(j, M) if(X[As[j]-1] && X[Bs[j]-1]) cnt++;

        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}