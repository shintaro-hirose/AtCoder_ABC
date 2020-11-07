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
    int N, cnt;
    string ans;
    cin >> N;
    cnt = 0;
    rep(i, N){
        int a;
        cin >> a;
        if(i+1 != a){
            cnt++;
        }
    }
    ans = "NO";
    if(cnt<=2){
        ans = "YES";
    }
    cout << ans << endl;
    
    return 0;
}
