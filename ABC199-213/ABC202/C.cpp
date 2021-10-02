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
    int N;
    cin >> N;
    vi As(N), Bs(N), Cs(N), Ds(N);
    rep(i, N) cin >> As[i];
    rep(i, N) cin >> Bs[i];
    rep(i, N) cin >> Cs[i];

    rep(i, N) { Ds[i] = Bs[Cs[i] - 1]; }

    vl cntA(N + 1);
    vl cntD(N + 1);
    rep(i, N) {
        cntA[As[i]]++;
        cntD[Ds[i]]++;
    }
    ll ans = 0;
    for(int i = 1; i <= N; i++) {
        ans += cntA[i] * cntD[i];
    }
    cout << ans << endl;
    return 0;
}