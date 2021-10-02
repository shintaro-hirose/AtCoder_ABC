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
    string X;
    int N;
    cin >> X >> N;
    vector<pair<string,string>> S(N);
    int D[26];
    rep(i, 26) { D[X[i] - 'a'] = i; }
    rep(i, N) {
        string s;
        cin >> s;
        string t = s;
        rep(j, t.size()) { t[j] = 'a' + D[t[j] - 'a']; }
        S[i] = {t,s};
    }
    sort(S.begin(), S.end());
    rep(i, N) { cout << S[i].second << endl; }
}