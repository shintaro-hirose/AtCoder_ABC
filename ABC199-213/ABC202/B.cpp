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
    char ref[10] = {'0', '1', '2', '3', '4', '5', '9', '7', '8', '6'};

    string ans = "";

    int N = S.size();
    rep(i, N) {
        int a = S[N - 1 - i] - '0';
        ans += ref[a];
    }
    cout << ans << endl;
    return 0;
}