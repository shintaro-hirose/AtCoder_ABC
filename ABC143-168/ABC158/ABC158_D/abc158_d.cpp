/*
2020-04-25
atcoder ABC
D - Bouquet
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

ll n, a, b;

ll modpow(ll, ll, ll);
ll combi_mod(ll, ll, ll);

void input() {
    cin >> n >> a >> b;
    return;
}

void solve() {
    // cout << modpow(2, n, mod) << endl;
    // cout << combi_mod(a, n, mod) << endl;
    // cout << combi_mod(b, n, mod) << endl;
    
    cout << (mod + mod + modpow(2, n, mod) - 1 - combi_mod(a, n, mod) - combi_mod(b, n, mod)) % mod << endl;
    return;
}

int main() {
    input();
    solve();
    return 0;
}

//2のn乗を繰り返し二乗法で求める関数(modの余剰あり)
ll modpow(ll a, ll n, ll p) {
    if(n == 1) return a % p;
    if(n % 2 == 1) {
        return (a * modpow(a, n - 1, p)) % p;
    } else {
        ll t = modpow(a, n / 2, p);
        return (t * t) % p ;
    }
}


//modの余剰という条件下でコンビネーションを返す関数
ll combi_mod(ll a, ll n, ll p){
    a = min(a, n - a);
    ll x = 1;
    ll y = 1;
    for(ll i = n - a + 1;i < n + 1; i++) {
        x = (x * i) % p;
    }
    for(ll i = 1; i < a + 1; i++){
        y = (y * i) % p;
    }
    return (x * modpow(y, p - 2, p)) % p; 
}