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
    int cntMemo[100009];
    rep(i,100009) cntMemo[i] = 0;
    int n;
    cin >> n;
    ll sum = 0;
    rep(i,n){
        int a;
        cin >> a;
        cntMemo[a]++;
        sum += (ll)a;
    }
    int q;
    cin >> q;
    rep(i,q){
        int b,c;
        cin >> b >> c;
        sum += (ll)cntMemo[b] * (c - b);
        cntMemo[c] += cntMemo[b];
        cntMemo[b] = 0;
        cout << sum << endl;
    }
}
