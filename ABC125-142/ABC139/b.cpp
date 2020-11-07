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
    int a,b, k, ans;
    cin >> a >> b;
    if(b == 1){
        cout << 0 << endl;
        return 0;
    }
    ans = 1;
    k = a;
    while(k < b){
        k = k - 1 + a;
        ans++;
    }
    cout << ans << endl;
    return 0;
}
