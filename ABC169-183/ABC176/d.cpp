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
    int H, W; cin >> H >> W;
    int CH, CW, DH, DW; cin >> CH >> CW >> DH >> DW;
    CH--;CW--;DH--;DW--;
    vector<string> Field(H);
    rep(i, H) cin >> Field[i];
    // B操作が何回でいけるかをメモする配列. まだみていないところは-1.
    vector<vector<int>> d_memo(H, vector<int>(W, -1));
    // d_points[n]: n回の操作で行ける点を格納する
    vector<vector<i_i>> d_points(1000010, vector<i_i>(0));

    int hmove[4] = {1,0,-1,0};
    int wmove[4] = {0,1,0,-1};

    int d = 0;
    d_memo[CH][CW] = 0;
    d_points[0].push_back(make_pair(CH, CW));
    while(d_points[d].size() != 0) {
        for(i_i p: d_points[d]){
            int ph = p.first, pw = p.second;
            queue<i_i> q;
            q.push(make_pair(ph, pw));
            while(!q.empty()){
                i_i curp = q.front();
                q.pop();
                int curh = curp.first, curw = curp.second;
                rep(i, 4){
                    int nexth, nextw;
                    nexth = curh + hmove[i];
                    nextw = curw + wmove[i];
                    if(0<=nexth && 0<=nextw && nexth<H && nextw<W && Field[nexth][nextw] == '.' && d_memo[nexth][nextw] == -1){
                        d_memo[nexth][nextw] = d;
                        d_points[d].push_back(make_pair(nexth, nextw));
                        q.push(make_pair(nexth, nextw));
                    }
                }
            }
        }
        for(i_i p: d_points[d]){
            int ph = p.first, pw = p.second;
            for(int i = -2; i <= 2; i++) {
                for(int j = -2; j <= 2; j++) {
                    int nexth = ph+i, nextw = pw+j;
                    if(0<=nexth && 0<=nextw && nexth<H && nextw<W && Field[nexth][nextw] == '.' && d_memo[nexth][nextw] == -1){
                        d_memo[nexth][nextw] = d+1;
                        d_points[d+1].push_back(make_pair(nexth, nextw));
                    }
                }
            }
        }
        d++;
        if(d_memo[DH][DW] != -1){
            cout << d_memo[DH][DW] << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}