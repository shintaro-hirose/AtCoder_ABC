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
    int N, T;
    cin >> N >> T;
    vi A(N);
    rep(i, N) cin >> A[i];
    int n1, n2;
    vl B1(0);
    vl B2(0);
    n1 = N/2;
    n2 = N - n1;
    rep(i,1<<n1){
        ll sum = 0;
        rep(j,n1){
            if(i>>j & 1)sum += A[j];
        }
        if(sum<=T)B1.push_back(sum);
    }
    rep(i,1<<n2){
        ll sum = 0;
        rep(j,n2){
            if(i>>j & 1)sum += A[j+n1];
        }
        if(sum<=T)B2.push_back(sum);
    }
    sort(B1.begin(), B1.end());
    sort(B2.begin(), B2.end());
    ll ans = 0;
    rep(i,B1.size()){
        auto itr = upper_bound(B2.begin(), B2.end(), T-B1[i]);
        if(itr == B2.begin()) break;
        else ans = max(ans, B1[i] + *(itr-1));
    }
    rep(i,B2.size()){
        auto itr = upper_bound(B1.begin(), B1.end(), T-B2[i]);
        if(itr == B1.begin()) break;
        else ans = max(ans, B2[i] + *(itr-1));
    }
    cout << ans << endl;
    return 0;
}