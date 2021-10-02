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
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9 + 10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    ll R, X, Y;
    cin >> R >> X >> Y;
    double D = sqrt(X * X + Y * Y);
    ll ans;
    if(D == R)
        ans = 1;
    else if(D <= 2 * R)
        ans = 2;
    else
        ans = ceil(D / R);
    cout << ans << endl;
}
