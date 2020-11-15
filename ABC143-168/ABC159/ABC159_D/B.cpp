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
    string S; cin >> S;
    int N = S.size();
    string T = S;
    reverse(T.begin(), T.end());
    string subS1 = S.substr(0,(N-1)/2);
    string subS2 = S.substr((N+3)/2 - 1, (N-1)/2);
    string subT1 = subS1;
    string subT2 = subS2;
    reverse(subT1.begin(), subT1.end());
    reverse(subT2.begin(), subT2.end());
    string ans = "No";
    if(T==S && subT1 == subS1 && subT2 == subS2) ans = "Yes";
    cout << ans << endl;
    return 0;
}