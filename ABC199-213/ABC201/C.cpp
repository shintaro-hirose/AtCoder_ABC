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
    string S;
    cin >> S;
    int ans = 0;
    rep(i, 10000) {
        int a, b, c, d;
        a = i % 10;
        b = (i / 10) % 10;
        c = (i / 100) % 10;
        d = (i / 1000) % 10;

        bool ok = true;
        rep(j, 10) {
            char ch = S[j];
            if(ch == 'o') {
                if(j != a && j != b && j != c && j != d) {
                    ok = false;
                    break;
                }
            } else if(ch == 'x') {
                if(j == a || j == b || j == c || j == d) {
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
            ans++;
    }
    cout << ans << endl;
    return 0;
}