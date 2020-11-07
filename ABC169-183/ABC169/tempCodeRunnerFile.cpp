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
const ll finf = 1e18;

int countDeg(ll a){
    int cnt = 0;
    while(a >= 10 ){
        a /= 10;
        cnt++;
    }
    return ++cnt;
}

int main() {
    int N;
    cin >> N;
    vector<ull> nums(N);
    ull ans;
    ans = 1;
    rep(i, N){
        cin >> nums[i];
        if(nums[i] == 0){
            cout << 0 << endl;
            return 0;
        }
    }
    rep(i, N){
        ull a = nums[i];
        if(countDeg(ans) + countDeg(a) > 18 || ans * a > finf){
            cout << -1 << endl;
            return 0;
        }
        ans *= a;
    }
    cout << ans << endl;
    
    return 0;
}
