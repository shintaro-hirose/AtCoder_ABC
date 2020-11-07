/*
2020-05-05
atcoder ABC
*/

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
    int N, M, X, ans = INF;
    cin >> N >> M >> X;
    vector<vector<int>> data(N, vector<int>(M + 1));

    rep(i, N){
        int C;
        cin >> C;
        data[i][0] = C;
        rep(j, M){
            int A;
            cin >> A;
            data[i][j + 1] = A;
        }
    }

    for (int bit = 0; bit < (1<<N); ++bit) {
        vector<int> S;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) {
                S.push_back(i);
            }
        }
        vector<int> memo(M);
        int total = 0;
        bool isOK = true;
        for (int i = 0; i < (int)S.size(); ++i) {
            for(int j = 0; j < M; j++){
                memo[j] += data[S[i]][j + 1];
            }
            total += data[S[i]][0];
        }
        for(int i = 0; i < M; i++){
            if(memo[i] < X){
                isOK = false;
                break;
            }
        }
        if(isOK){
            ans = min(ans, total);
        }
    }
    
    if(ans == INF){
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }

    return 0;
}
