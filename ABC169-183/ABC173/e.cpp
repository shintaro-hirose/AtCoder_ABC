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
// #define debug(a) cout << "["; rep(i,a.size()) cout << a[i] << ", "; cout<<"]"<< endl;

const ll mod = 1000000007;

int main() {
    /*  入力  */
    int n, k; cin >> n >> k;
    vector<ll> As;
    vector<ll> Bs;
    vector<ll> all(n);
    vector<ll> ansvec;
    rep(i,n){
        ll a; cin >> a;
        all.at(i) = a;
        if(a>=0) {
            As.push_back(a);
        } else {
            Bs.push_back(a);
        }
    }
    /*  正にできるか判定  */
    bool canBePositive = false;
    if(As.size() > 0){
        if(n == k){
            if(Bs.size() % 2 == 0){
                canBePositive = true;
            }
        } else {
            canBePositive = true;
        }
    } else {
        if(k % 2 == 0) canBePositive = true;
    }

    if(canBePositive){
        if(k % 2 == 0){
            if(As.size() >= 2)
        } else {

        }
    }

    
    return 0;
}