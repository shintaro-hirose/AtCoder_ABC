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

vb seen(101010);
vvi adj(101010);
vb good(101010);
vi cnt(101010);
vi Cs(101010);

void dfs(int n) {
    if(cnt[Cs[n]] == 0)
        good[n] = true;
    cnt[Cs[n]]++;
    for(int x : adj[n]) {
        if(!seen[x]) {
            seen[x] = true;
            dfs(x);
        }
    }
    cnt[Cs[n]]--;
}

int main() {
    int N;
    cin >> N;
    rep(i, N) cin >> Cs[i];
    rep(i, N - 1) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    seen[0] = true;
    dfs(0);
    rep(i, N) {
        if(good[i])
            cout << i + 1 << endl;
    }
    return 0;
}