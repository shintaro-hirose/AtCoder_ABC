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
const ll mod = 1000000007;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> field(H);
    rep(i, H){
        cin >> field[i];
    }

    int ans;
    ans = 0;
    rep(hi, H){
        rep(wi, W){
            if(field[hi][wi] == '#') continue;

            queue<i_i> q;
            vector<vector<int>> d(H, vector<int>(W, -1));
            vector<int> hmove = {0,0,1,-1};
            vector<int> wmove = {1,-1,0,0};

            q.push({hi, wi});
            d[hi][wi] = 0;

            while(q.size() > 0){
                int ch, cw;
                ch = q.front().first;
                cw = q.front().second;
                q.pop();
                rep(i, 4){
                    int nh, nw;
                    nh = ch + hmove[i];
                    nw = cw + wmove[i];
                    if(nh >= 0 && nw >= 0 && nh < H && nw < W && field[nh][nw] == '.' && d[nh][nw] == -1){
                        q.push({nh, nw});
                        d[nh][nw] = d[ch][cw] + 1;
                        ans = max(d[nh][nw], ans);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    
    return 0;
}
