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

ll gcd(ll a, ll b){
    ll num1 = max(a, b);
    ll num2 = min(a, b);
    if(num1 % num2 == 0){
        return num2;
    }
    return gcd(num1 % num2, num2);
}

int main() {
    ll A, B, d, ans;
    cin >> A >> B;
    d = gcd(A, B);
    ans = 0;
    for(ll i = 2; i * i <= d; i++){
        if(d % i == 0){
            ans++;
        }
        while(d % i == 0){
            d /= i;
        }
    }
    if(d > 1)ans++;
    cout << ++ans << endl;

    return 0;
}
