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

int H, W, A, B, ans=0;

void dfs(int i, int bit, int a, int b){
    if(i == H * W) return (void)ans++;
    if(bit & 1 << i) return dfs(i+1, bit, a, b);
    if(b) dfs(i+1, bit | 1 << i, a, b - 1);
    if(a) {
        if(i % W != W - 1  && ~bit & 1 << (i + 1)) dfs(i + 1, bit | 1 << i | 1 << (i + 1), a-1, b);
        if(i + W < H * W) dfs(i + 1, bit | 1 << i | 1 << (i + W), a-1, b);
    }
}

int main() {
    cin >> H >> W >> A >> B;
    dfs(0, 0, A, B);
    cout << ans << endl;
    return 0;
}