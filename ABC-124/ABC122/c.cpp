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
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, Q;
    string S;
    cin >> N >> Q >> S;

    vi A(N);
    // A[i]: 0 ~ i番目まで見たときのACの数
    bool preA = false;
    int cnt = 0;
    rep(i, N){
        char cur = S[i];
        if(cur == 'A') preA = true;
        else if(cur == 'C' && preA) cnt++;

        if(cur != 'A') preA = false;
        A[i] = cnt;
    }

    rep(i, Q) {
        int l, r;
        cin >> l >> r;
        int ans = A[r - 1] -  A[l - 1];
        cout << ans << endl;
    }

    return 0;
}