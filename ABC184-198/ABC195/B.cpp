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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9+10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int A, B, W; cin >> A >> B >> W;
    int n, m;
    n = (W*1000 - 1) / B + 1;
    m = (W*1000) / A;
    if (n>m){
        cout << "UNSATISFIABLE" << endl;
        return 0;
    }
    cout << n << " " << m << endl;
    return 0;
}