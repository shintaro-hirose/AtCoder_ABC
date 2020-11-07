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

vector<ll> prime_factorize(ll N) {
    vector<ll> res;
    for (ll a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        ll ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            ++ex;
            N /= a;
        }

        // その結果を push
        res.push_back(ex);
    }

    // 最後に残った数について
    if (N != 1) res.push_back(1);
    return res;
}

ll pairsCanMake(ll n){
    ll a = 1;
    for(a = 1; a * (a + 1) <= 2 * n; a++);
    return --a;
}

int main() {
    ll N, ans;
    cin >> N;
    vector<ll> primeCounts;
    primeCounts = prime_factorize(N);
    ans = 0;
    for(ll x: primeCounts){
        ans += pairsCanMake(x);
    }

    cout << ans << endl;

    
    return 0;
}
