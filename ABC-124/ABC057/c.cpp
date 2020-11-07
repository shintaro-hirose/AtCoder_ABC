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

int digits(ll a){
    int ans = 1;
    while(a > 9){
        a = a / 10;
        ans++;
    }
    return ans;
}

int main() {
    ll n;
    cin >> n;
    int ans = 100;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            int f;
            f = max(digits(i), digits(n / i));
            ans = min(ans, f);
        }
    }
    cout << ans << endl;
    return 0;
}
