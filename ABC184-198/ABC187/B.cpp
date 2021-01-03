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
    vi Xs(N);
    vi Ys(N);
    rep(i, N) cin >> Xs[i] >> Ys[i];
    int ans = 0;
    rep(i, N-1)for(int j = i + 1; j < N; j++){
        if(abs(Ys[i]-Ys[j]) <= abs(Xs[i]-Xs[j]))ans++;
    }
    cout << ans << endl;
    return 0;
}