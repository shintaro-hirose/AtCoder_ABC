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
    int N, ans;
    string S;
    cin >> N >> S;
    rep(i, N - 2){
        if((S[i] == 'A') && (S[i + 1] == 'B') && (S[i + 2] == 'C')){
            ans++;
        }
    }
    cout << ans << endl;
    
    return 0;
}
