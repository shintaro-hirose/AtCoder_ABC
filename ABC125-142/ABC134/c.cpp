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
    int N, A;
    cin >> N;
    int _max, _nmax, maxi, nmaxi;
    _max = 0;
    _nmax = 0;
    maxi = 0;
    nmaxi = 0;
 
    rep(i, N){
        int a;
        cin >> a;
        if(_max == a){
            _nmax = a;
        }
        if(a > _max){
            _max = a;
            maxi = i;
        } else if(a > _nmax){
            _nmax = a;
        }
    }
    rep(i, N){
        if(i == maxi){
            cout << _nmax << endl;
        } else {
            cout << _max << endl;
        }
    }
    
    return 0;
}
