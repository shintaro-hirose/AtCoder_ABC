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
    int N; cin >> N;
    vi As(1<<N);
    rep(i, 1<<N) cin >> As[i];
    int s1=0,p1=0,s2=0,p2=0;
    rep(i,1<<N){
        if(i<1<<(N-1)){
            if(p1<As[i]){
                s1 = i+1;
                p1 = As[i];
            }
        }
        else {
            if(p2<As[i]){
                s2 = i+1;
                p2 = As[i];
            }
        }
    }
    int ans = p1<p2 ? s1 : s2;
    cout << ans << endl;
    return 0;
}