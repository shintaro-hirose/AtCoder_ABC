#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)

#define PI (acos(-1))
const ll INF = 1e9;

const ll mod = 1000000007;

int countD(ll n, int ans){
    if(n / 10 == 0){
        return ans + 1;
    }
    n /= 10;
    return countD(n, ans + 1);
}

ll searchAns(ll s, ll e, ll m, ll A, ll B, ll X){
    if(s == e){
        return s;
    }
    if(A * m + B * countD(m,0) <= X){
        return searchAns(m, e, (e + m)/ 2 + 1, A, B, X);
    } else {
        return searchAns(s, m - 1, (s + m - 1) / 2, A, B, X);
    }
}

int main() {
    ll A,B,X, s, m, e, ans;
    int dmax;
    cin >> A >> B >> X;

    if(A + B > X){
        ans = 0;
    } else if(A * INF + B * 10 <= X){
        ans = INF;
    } else {
        s = 1;
        e = INF;
        m = INF / 2;
        ans = searchAns(s, e, m, A, B, X);
    }


    cout << ans << endl;
    
    return 0;
}
