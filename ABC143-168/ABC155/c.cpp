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
    map<string, int> mp;
    int maxcnt = 0;
    rep(i,n){
        string s; cin >> s;
        mp[s]++;
        maxcnt = max(maxcnt, mp[s]);
    }
    for(pair<string, int> p: mp){
        if(p.second == maxcnt){
            cout << p.first << endl;
        }
    }
    return 0;
}