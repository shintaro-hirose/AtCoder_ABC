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
    int N;
    string S, ans;
    cin >> N >> S;
    if(N % 2 == 1){
        ans = "No";
    } else {
        if(S.substr(0, N / 2) == S.substr(N / 2, N / 2)){
            ans = "Yes";
        } else {
            ans = "No";
        }
    }
    cout << ans << endl;
        
    return 0;
}
