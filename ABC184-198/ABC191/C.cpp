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
    int H, W; cin >> H >> W;
    vs S(H); rep(i, H) cin >> S[i];
    int ans=0;
    rep(i,H-1)rep(j,W-1){
        int cnt=0;
        if(S[i][j]=='#')cnt++;
        if(S[i+1][j]=='#')cnt++;
        if(S[i][j+1]=='#')cnt++;
        if(S[i+1][j+1]=='#')cnt++;
        if(cnt==1 || cnt==3)ans++;
    }
    cout << ans << endl;
    return 0;
}