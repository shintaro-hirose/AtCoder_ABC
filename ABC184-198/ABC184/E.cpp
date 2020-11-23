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
    vs A(H);
    int si, sj;
    vector<vector<i_i>> T(26, vector<i_i>(0));
    rep(i, H) cin >> A[i];
    rep(i, H) rep(j, W){
        char c = A[i][j];
        if('a'<=c && c<='z'){
            T[c-'a'].push_back(i_i(i,j));
        }
        if(c=='S'){
            si = i;
            sj = j;
        }
    }
    // bfs
    int imove[4] = {0,1,0,-1};
    int jmove[4] = {1,0,-1,0};
    vvi ans(H, vi(W, INF));
    ans[si][sj] = 0;
    queue<i_i> q;
    q.push(i_i(si,sj));
    while(!q.empty()){
        i_i p = q.front();
        q.pop();
        int curi = p.first;
        int curj = p.second;
        rep(k, 4){
            int nexti = curi + imove[k];
            int nextj = curj + jmove[k];
            if(nexti>=0 && nextj>=0 && nexti<H && nextj<W && 
            A[nexti][nextj] != '#' && ans[nexti][nextj] == INF){
                ans[nexti][nextj] = ans[curi][curj] + 1;
                if(A[nexti][nextj] == 'G'){
                    cout << ans[nexti][nextj] << endl;
                    return 0;
                }
                q.push(i_i(nexti, nextj));
            }
        }
        char c = A[curi][curj];
        if('a'<=c && c<='z'){
            for(i_i x: T[c-'a']){
                int nexti = x.first;
                int nextj = x.second;
                if(ans[nexti][nextj] == INF){
                    ans[nexti][nextj] = ans[curi][curj] + 1;
                    q.push(i_i(nexti, nextj));
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}