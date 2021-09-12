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
#define INF (1e9+10)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int H, W, X, Y; cin >> H >> W >> X >> Y;
    vs S(H); rep(i, H) cin >> S[i];

    X--;
    Y--;

    int hi=X;
    int ans = 0;
    while(hi >= 0){
        if(S[hi][Y] == '.') ans++;
        else break;
        hi--;
    }
    hi = X;
    while(hi < H){
        if(S[hi][Y] == '.') ans++;
        else break;
        hi++;
    }

    int wi=Y;
    while(wi >= 0){
        if(S[X][wi] == '.') ans++;
        else break;
        wi--;
    }
    wi = Y;
    while(wi < W){
        if(S[X][wi] == '.') ans++;
        else break;
        wi++;
    }
    ans -= 3;
    cout << ans << endl;
    return 0;
}