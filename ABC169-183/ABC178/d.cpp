#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

// A[n] = A[n-1] + A[n-3];

ll dp(ll n, vector<ll>& memo){
    if(n == 3) return 1;
    if(n < 3) return 0;
    if(memo[n] != -1) return memo[n];
    ll ret = (dp(n-1, memo) + dp(n-3, memo))%mod;
    memo[n] = ret;
    return ret;
}

int main() {
    ll S; cin >> S;
    vector<ll> memo(S+1, -1);
    cout << dp(S, memo) << endl;
    return 0;
}