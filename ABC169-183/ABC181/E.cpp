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
#define INF (1e18)
#define PI (acos(-1))
const ll mod = 1000000007;

int main() {
    int N, M; cin >> N >> M;
    vl Hs(N);
    vl Ws(M);
    rep(i, N) cin >> Hs[i];
    rep(i, M) cin >> Ws[i];
    sort(Hs.begin(), Hs.end());
    sort(Ws.begin(), Ws.end());

    vl leftGr((N + 1)/2+1);
    vl rightGr((N + 1)/2+1);

    ll leftSum = 0;
    ll rightSum = 0;
    rep(i,(N+1)/2-1){
        leftSum += Hs[i * 2 + 1] - Hs[i*2];
        leftGr[i+1] = leftSum;
        rightSum += Hs[N - 1 - i * 2] - Hs[N - 2 - i * 2];
        rightGr[i+1] = rightSum;
    }
    // rep(i,(N + 1)/2+1) cout << leftGr[i] << endl;
    // cout << endl;
    // rep(i,(N + 1)/2+1) cout << rightGr[i] << endl;

    int l = 0;
    ll ans = INF;
    rep(i, M){
        while(l < N){
            if(Ws[i] <= Hs[l]) break;
            l++;
        }
        if(l>=N){
            ans = min(ans, leftGr[(N+1)/2-1]+Ws[i]-Hs[N-1]);
        }
        if(l%2 == 1){
            ans = min(ans, leftGr[l/2]+rightGr[(N-l)/2]+Ws[i]-Hs[l-1]);
        }
        else {
            ans = min(ans, leftGr[l/2]+rightGr[(N-l-1)/2]+Hs[l]-Ws[i]);
        }
    }
    cout << ans << endl;
    return 0;
}