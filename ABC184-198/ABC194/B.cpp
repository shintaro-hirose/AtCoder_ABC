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
    vi As(N), Bs(N);
    rep(i, N) cin >> As[i] >> Bs[i];

    int ans = INF;
    rep(i, N) rep(j, N) {
        if(i == j)
            ans = min(ans, As[i] + Bs[j]);
        else
            ans = min(ans, max(As[i], Bs[j]));
    }
    cout << ans << endl;
    return 0;
}