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
    int N;
    cin >> N;
    vector<ll> Xs(N);
    rep(i, N) cin >> Xs[i];
    ll d1,d3, bd2;
    double d2;
    d1 = 0;
    bd2 = 0;
    d3 = 0;
    rep(i,N){
        d1 += abs(Xs[i]);
        bd2 += Xs[i] * Xs[i];
        d3 = max(d3, abs(Xs[i]));
    }
    d2 = sqrt(bd2);

    cout << d1 << endl;
    cout << fixed << setprecision(15) << d2 << endl;
    cout << d3 << endl;

    return 0;
}