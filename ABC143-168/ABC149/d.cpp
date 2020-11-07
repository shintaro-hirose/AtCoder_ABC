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
    int N, K, R, S, P, ans;
    cin >> N >> K >> R >> S >> P;
    string T;
    cin >> T;
    map<char, int> points = {{'r', P}, {'s', R}, {'p', S}};

    ans = 0;
    rep(i, K){
        char prev = 'n';
        bool hasToMinusNext = true;
        for(int j = i; j < N; j = j + K){
            char now;
            now = T[j];
            if(now == prev && hasToMinusNext){
                hasToMinusNext = false;
            } else {
                ans += points[now];
                hasToMinusNext = true;
            }
            prev = now;
        }
    }
    cout << ans << endl;
    
    return 0;
}
