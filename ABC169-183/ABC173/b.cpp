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
// #define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    int n; cin >> n;
    unordered_map<string, int> memo;
    rep(i,n){
        string s;
        cin >> s;
        memo[s]++;
    }
    cout << "AC x " << memo["AC"] << endl;
    cout << "WA x " << memo["WA"] << endl;
    cout << "TLE x " << memo["TLE"] << endl;
    cout << "RE x " << memo["RE"] << endl;

    return 0;
}