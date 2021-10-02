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
    int N;
    cin >> N;
    vi As(N);
    rep(i, N) cin >> As[i];

    int cnt = min(N, 8);
    vector<i_i> seen(200);

    for(int i = 1; i < (1 << cnt); i++) {
        int n = 0;
        int l = 0;
        rep(j, cnt) {
            if(i & 1 << j) {
                l++;
                n += As[j] % 200;
                n %= 200;
            }
        }
        if(seen[n].first) {
            cout << "Yes" << endl;
            cout << seen[n].second << " ";
            rep(k, cnt) {
                if(seen[n].first & 1 << k)
                    cout << k + 1 << " ";
            }
            cout << endl;
            cout << l << " ";

            rep(k, cnt) {
                if(i & 1 << k)
                    cout << k + 1 << " ";
            }
            cout << endl;
            return 0;
        }
        seen[n] = i_i(i, l);
    }
    cout << "No" << endl;
    return 0;
}