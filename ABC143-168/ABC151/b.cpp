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
    int N, K, M, ans, total;
    cin >> N >> K >> M;
    total = 0;
    rep(i, N - 1){
        int a;
        cin >> a;
        total += a;
    }
    if(total > N * M){
        ans = 0;
    } else if(N * M - total > K){
        ans = -1;
    } else {
        ans = N * M - total;
    }
    cout << ans << endl;
    
    return 0;
}
