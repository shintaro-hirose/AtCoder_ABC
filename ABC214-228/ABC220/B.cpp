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
    int K;
    string A, B;
    cin >> K >> A >> B;
    ll AN = 0, BN = 0;
    rep(i, A.size()) { AN += pow(K, i) * (ll)(A[A.size() - 1 - i] - '0'); }
    rep(i, B.size()) { BN += pow(K, i) * (ll)(B[B.size() - 1 - i] - '0'); }
    cout << AN * BN << endl;
    return 0;
}