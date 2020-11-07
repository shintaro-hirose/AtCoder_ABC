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

int main() {
    ll n; cin >> n;
    string ans = "";
    
    while(n>0){
        n--;
        int r;
        r = n % 26;
        ans += 'a' + r;
        n /= 26;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}