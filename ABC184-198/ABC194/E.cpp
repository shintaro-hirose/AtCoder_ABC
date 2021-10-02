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
    int N, M;
    cin >> N >> M;
    vi As(N);
    rep(i, N) cin >> As[i];

    int cnt[1501010];
    memset(cnt, 0, sizeof(cnt));
    rep(i, M) { cnt[As[i]]++; }

    int l;
    rep(i, M + 1) {
        if(cnt[i] == 0) {
            l = i;
            break;
        }
    }
    rep(i, N - M) {
        int c, d;
        c = As[i];
        d = As[M + i];
        cnt[c]--;
        cnt[d]++;
        if(cnt[c] == 0 && c < l) {
            l = c;
        }
    }
    cout << l << endl;
    return 0;
}