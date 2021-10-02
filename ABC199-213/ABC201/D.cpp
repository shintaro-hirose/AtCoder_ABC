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

int f(char c) {
    if(c == '+')
        return 1;
    return -1;
}

int main() {
    int H, W;
    cin >> H >> W;
    vs A(H);
    rep(i, H) cin >> A[i];

    // bfs
    int imove[2] = {0, -1};
    int jmove[2] = {-1, 0};
    vvi opt(H, vi(W));

    for(int i = H - 1; i >= 0; i--) {
        for(int j = W - 1; j >= 0; j--) {
            rep(k, 2) {
                int ni = i + imove[k];
                int nj = j + jmove[k];
                if(ni < 0 || nj < 0)
                    continue;
                if((ni + nj) % 2 == 0) {
                    if(ni + 1 < H && nj + 1 < W) {
                        opt[ni][nj] = max(opt[ni + 1][nj] + f(A[ni + 1][nj]),
                                          opt[ni][nj + 1] + f(A[ni][nj + 1]));
                    } else if(ni + 1 < H) {
                        opt[ni][nj] = opt[ni + 1][nj] + f(A[ni + 1][nj]);
                    } else if(nj + 1 < W) {
                        opt[ni][nj] = opt[ni][nj + 1] + f(A[ni][nj + 1]);
                    }
                } else {
                    if(ni + 1 < H && nj + 1 < W) {
                        opt[ni][nj] = min(opt[ni + 1][nj] - f(A[ni + 1][nj]),
                                          opt[ni][nj + 1] - f(A[ni][nj + 1]));
                    } else if(ni + 1 < H) {
                        opt[ni][nj] = opt[ni + 1][nj] - f(A[ni + 1][nj]);
                    } else if(nj + 1 < W) {
                        opt[ni][nj] = opt[ni][nj + 1] - f(A[ni][nj + 1]);
                    }
                }
            }
        }
    }
    string ans = "";
    if(opt[0][0] == 0) {
        ans = "Draw";
    } else if(opt[0][0] > 0) {
        ans = "Takahashi";
    } else {
        ans = "Aoki";
    }
    cout << ans << endl;
    return 0;
}