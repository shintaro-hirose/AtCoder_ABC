/*
2020-05-03
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
    int N, K, ans = 0;
    cin >> N >> K;
    vector<int> data(N);

    rep(i, K){
        int d;
        cin >> d;
        rep(j, d){
            int c;
            cin >> c;
            data[c - 1]++;
        }
    }
    rep(i, N){
        if(data[i] == 0){
            ans++;
        }
    }
    
    cout << ans << endl;
    return 0;
}
