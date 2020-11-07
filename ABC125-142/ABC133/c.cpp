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
    int x, n, dmin, ans;
    cin >> x >> n;
    vector<int> p(n);
    rep(i,n) cin >> p[i];

    dmin = 10000;
    for(int i = 300; i >= -300; i--){
        if(find(p.begin(), p.end(), i) == p.end()){
            if(dmin >= abs(i - x)){
                dmin = abs(i - x);
                ans = i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
