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
    vi A(N);
    rep(i, N) cin >> A[i];
    int ans = 0;
    int maxCnt = 0;
    for(int i = 2; i <= 1000; i++){
        int cnt = 0;
        rep(j, N){
            if(A[j] % i == 0) cnt++;
        }
        if(cnt > maxCnt){
            maxCnt = cnt;
            ans = i;
        }
    }
    cout << ans << endl;
    return 0;
}