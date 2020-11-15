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
    int N, K; cin >> N >> K;
    vvi T(N, vi(N));
    rep(i, N) rep(j, N) cin >> T[i][j];
    vi A(N - 1);
    rep(i, N - 1) A[i] = i + 1;
    int ans = 0;
    do{
        int total = 0;
        total += T[0][A[0]];
        rep(i, N - 2) total += T[A[i]][A[i+1]];
        total += T[A[N - 2]][0];
        if(total == K) ans++;
    }while(next_permutation(A.begin(), A.end()));
    cout << ans << endl;
    return 0;
}