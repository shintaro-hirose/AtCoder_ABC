#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    ll N; cin >> N;
    ll ans=0;
    for(ll i=1; i*i <= 2*N; i++){
        if((2 * N) % i == 0){
            ll j=(2 * N) / i;
            if((i%2==0 && j%2==1) || (i%2==1 && j%2==0)) {
                if(i==j) ans++;
                else ans += 2;
            }
        }
    }
    cout << ans << endl;
    return 0;
}