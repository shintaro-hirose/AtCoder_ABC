#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define NINF (1e15)
#define PI (acos(-1))

const ll mod = 1000000007;

int main() {
    ll N;
    cin >> N;
    ll ans = NINF;
    rep(i, N){
        ll a = i + 1;
        if(pow(a, 2.0) > N) break;
        if(N % a == 0){
            ans = min(ans, a + N / a - 2);
        }
    }
    cout << ans << endl;
    
    return 0;
}
