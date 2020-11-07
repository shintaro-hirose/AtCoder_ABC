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
    string S;
    cin >> S;

    int N = (int)S.size();
    int cnt = 0;
    int ans = 0;
    while(1){
        if(S[cnt] != S[N - cnt - 1]){
            ans++;
        }
        if(cnt == (N - 1) / 2) break;
        cnt++;
    }
    cout << ans << endl;

    return 0;
}
