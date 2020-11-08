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
    vl A(N);
    vl S(N);
    vl T(N);
    ll sum = 0;
    ll prevT = 0;
    rep(i, N){
        cin >> A[i];
        sum += A[i];
        S[i] = sum;
        if(prevT < sum){
            T[i] = sum;
            prevT = sum;
        } else {
            T[i] = prevT;
        }
    }
    // rep(i, N) cout << S[i] << endl;
    // rep(i, N) cout << T[i] << endl;
    ll ans = 0;
    ll prev = 0;
    rep(i, N){
        ans = max(ans, prev + T[i]);
        prev += S[i];
    }
    cout << ans << endl;
    return 0;
}