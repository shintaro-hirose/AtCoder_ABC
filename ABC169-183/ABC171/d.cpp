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
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    rep(i,n){
        ll ai;
        cin >> ai;
        a[i] = ai;
        sum += ai;
    }
    int q;
    cin >> q;
    vector<i_i> bc(q);
    rep(i,q){
        int b,c;
        cin >> b >> c;
        bc[i] = make_pair(b,c);
    }

    int erased[100009];
    int cntMemo[100009];

    rep(i,q){
        int b = bc[i].first, c = bc[i].second;
        if(erased[b] == 1){
            cout << sum << endl;
            continue;
        }
        int b_cnt = count(a.begin(), a.end(), b) + cntMemo[b];
        sum += (ll)b_cnt * (bc[i].second - b);
        cntMemo[c] += b_cnt;
        cntMemo[b] = 0;
        erased[b] = 1;
        erased[c] = 0;
        cout << sum << endl;
    }
    return 0;
}
