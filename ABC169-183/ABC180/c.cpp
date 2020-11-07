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
    ll N; cin >> N;
    set<ll> st;
    for(ll x = 1; x * x <= N; x++){
        if(N % x == 0) {
            st.insert(x);
            st.insert(N/x);
        }
    }
    for(auto itr = st.begin(); itr != st.end(); itr++){
        cout << *itr << endl;
    }
    return 0;
}