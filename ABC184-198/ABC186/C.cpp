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
    int N; cin >> N;
    int ans = 0;
    for(int i = 1; i <= N; i++){
        stringstream ss10, ss8;
        string s10, s8;
        ss10 << dec << i;
        ss8 << oct << i;
        s10 = ss10.str();
        s8 = ss8.str();
        if(find(s10.begin(), s10.end(), '7') == s10.end() 
        && find(s8.begin(), s8.end(), '7') == s8.end())ans++;
    }
    cout << ans << endl;
    return 0;
}