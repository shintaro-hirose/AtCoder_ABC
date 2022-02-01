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
const int AMAX = 202020;

int main() {
    int N, Q;
    cin >> N >> Q;
    vvi adj(N);
    rep(i, N - 1) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vb isRed(N);
    isRed[0] = true;
    queue<int> q;
    q.push(0);
    vb seen(N);
    seen[0] = true;
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(int x : adj[now]) {
            if(!seen[x]) {
                q.push(x);
                seen[x] = true;
                isRed[x] = !isRed[now];
            }
        }
    }
    rep(i, Q) {
        int c, d;
        cin >> c >> d;
        c--;
        d--;
        if(isRed[c] != isRed[d]) {
            cout << "Road" << endl;
        } else {
            cout << "Town" << endl;
        }
    }
    return 0;
}