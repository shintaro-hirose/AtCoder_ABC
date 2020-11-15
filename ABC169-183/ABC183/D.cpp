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
    ll N, W; cin >> N >> W;
    vl S(N);
    vl T(N);
    vl P(N);
    ll maxT = 0;
    rep(i, N){
        cin >> S[i] >> T[i] >> P[i];
        maxT = max(maxT, T[i]);
    }
    // imos
    vl memo(maxT + 1);
    rep(i, N){
        memo[S[i]] += P[i];
        memo[T[i]] -= P[i];
    }
    rep(i, maxT){
        memo[i+1] += memo[i];
        // cout << memo[i] << endl;
        if(memo[i] > W) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}