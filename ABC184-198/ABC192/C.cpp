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
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vi ans(K+1);
    ans[0]=N;
    rep(i, K){
        int n = ans[i];
        string ns1 = to_string(n);
        string ns2 = ns1;
        sort(ns1.rbegin(), ns1.rend());
        sort(ns2.begin(), ns2.end());
        ans[i+1]= stoi(ns1) - stoi(ns2);
    }
    cout << ans[K] << endl;
    return 0;
}